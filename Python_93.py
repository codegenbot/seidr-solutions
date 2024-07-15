def encode(message):
    vowels = set("aeiouAEIOU")
    return "".join(
        char if not char.isalpha()
        else (
            chr(((ord(char.lower()) - ord("a") + 2) % 26) + ord("a")).swapcase()
            if char.lower() not in vowels
            else chr(((ord(char.lower()) - ord("a") + 1) % 26) + ord("a")).swapcase()
        )
        for char in message
    )