def encode(message):
    encoded_message = ''
    for char in message:
        if char.isalpha():
            shift = 2
            base = ord('A') if char.isupper() else ord('a')
            encoded_message += chr((ord(char) + shift - base) % 26 + base)
        else:
            encoded_message += char
    return encoded_message