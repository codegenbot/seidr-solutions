def encode(message):
    encoded_message = []
    for char in message:
        if char.isalpha():
            char_lower = char.lower()
            encoded_char = chr((ord(char_lower) - 97 + 20) % 26 + 97)
            encoded_message.append(encoded_char)
        else:
            encoded_message.append(char.upper())
    return ''.join(encoded_message)