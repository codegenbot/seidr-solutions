def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            char_lower = char.lower()
            encoded_char = chr((ord(char_lower) - 97 + 20) % 26 + 97)
            encoded_char = encoded_char.upper() if char_lower.isupper() else encoded_char
            encoded_message += encoded_char
        else:
            encoded_message += char
    return encoded_message