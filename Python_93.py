def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            char_lower = char.lower()
            encoded_message += chr((ord(char_lower) - 97 + 2) % 26 + 97).upper() if char.isupper() else chr((ord(char_lower) - 97 + 2) % 26 + 97)
        else:
            encoded_message += char
    return encoded_message