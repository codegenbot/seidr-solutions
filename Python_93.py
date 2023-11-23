def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            encoded_char = chr((ord(char.lower()) - ord('a') + 6) % 26 + ord('a'))
            encoded_message += encoded_char
        else:
            encoded_message += char.upper()
    return encoded_message