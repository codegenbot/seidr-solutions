def encode_message(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            encoded_char = chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset)
            encoded_message += encoded_char
        else:
            encoded_message += char
    return encoded_message