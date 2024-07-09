def encode(message):
    encoded_message = ""
    for char in message:
        if char.lower() in "aeiou":
            encoded_char = chr(
                (ord(char.lower()) + 2 - ord("a")) % 26 + ord("a")
            ).upper()
        else:
            encoded_char = char.swapcase()
        encoded_message += encoded_char
    return encoded_message