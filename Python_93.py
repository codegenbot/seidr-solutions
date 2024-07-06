def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            encoded_char = chr((ord(char) - ord("a") + 3) % 26)
        else:
            encoded_char = char
        encoded_message += encoded_char
    return encoded_message