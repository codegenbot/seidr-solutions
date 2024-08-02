def encode(message):
    encoded_message = ""

    for char in message:
        if char.isalpha():
            encoded_message += chr(ord(char) + 2).upper()
        else:
            encoded_message += char

    return encoded_message