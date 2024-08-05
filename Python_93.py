def encode(message):
    return "".join(
        [
            chr(ord(char) + 2) if char.lower() in "aeiouAEIOU" else char.swapcase()
            for char in message
        ]
    )