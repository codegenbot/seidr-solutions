def encode(message):
    encoded_message = []
    for char in message:
        if char.isalpha() and char.islower():
            encoded_char = chr((ord(char) - ord('a') + 19) % 26 + ord('A'))
        else:
            encoded_char = char
        encoded_message.append(encoded_char)
    return ''.join(encoded_message)