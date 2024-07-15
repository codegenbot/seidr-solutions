def encode(message):
    return "".join(
        [
            (
                char
                if not char.isalpha()
                else (
                    chr(((ord(char.upper()) - ord("A") + 1) % 26) + ord("A")).swapcase()
                    if char.lower() not in set("aeiou")
                    else char.swapcase()
                )
            )
            for char in message
        ]
    )