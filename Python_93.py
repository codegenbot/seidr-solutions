def encode(message):
    return ''.join(chr(ord(char) + 2).upper() if char.isalpha() else char for char in message)