def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            new_ascii_code = (ord(char) + 2) % 26
            encoded_char = chr(new_ascii_code)
            encoded_message += encoded_char
        else:
            encoded_message += char
    return encoded_message