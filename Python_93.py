def encode(message):
    encoded_message = []
    for char in message:
        if char.isalpha():
            if char.isupper():
                encoded_char = chr((ord(char) - ord('A') + 19) % 26 + ord('A'))
            else:
                encoded_char = chr((ord(char) - ord('a') + 19) % 26 + ord('a'))
        else:
            encoded_char = char
        encoded_message.append(encoded_char)
    return ''.join(encoded_message)