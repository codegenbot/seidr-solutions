def encode(message):
    encoded_message = []
    for char in message:
        if char.isalpha():
            if char.islower():
                encoded_char = chr((ord(char) - ord('a') + 7) % 26 + ord('a'))
            else:
                encoded_char = chr((ord(char) - ord('A') + 7) % 26 + ord('A'))
        else:
            encoded_char = char
        encoded_message.append(encoded_char)
    return ''.join(encoded_message)