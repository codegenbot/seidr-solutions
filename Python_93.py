def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            char_lower = char.lower()
            encoded_char = chr((ord(char_lower) - 97 + 2) % 26 + 97)
            encoded_message += encoded_char.upper() if char.isupper() else encoded_char
        else:
            encoded_message += char
    return encoded_message