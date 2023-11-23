def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            encoded_char = chr((ord(char.lower()) - 97 + 20) % 26 + 97)
            encoded_message += encoded_char
        else:
            encoded_message += char
    encoded_message = encoded_message[::-1]
    return encoded_message