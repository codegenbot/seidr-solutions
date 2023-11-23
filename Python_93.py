def encode(message):
    encoded_message = []
    for char in message:
        if char.isalpha():
            encoded_char = chr((ord(char.lower()) - ord('a') + 19) % 26 + ord('a'))
        else:
            encoded_char = char
        encoded_message.append(encoded_char)
    return ''.join(encoded_message)