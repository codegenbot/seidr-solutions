def encode(message):
    vowels = set("aeiouAEIOU")
    return "".join(
        [
            (
                char
                if not char.isalpha()
                else (
                    chr(((ord(char.upper()) - ord("A") + 2) % 26) + ord("A")).swapcase()
                    if char.lower() not in vowels
                    else chr(ord(char) ^ 32)
                )
            )
            for char in message
            if char.isalpha() or char.isspace() or char.isdigit()  # Include digits
        ]
    )