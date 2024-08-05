def encode(message):
    return ''.join([chr(ord(char) + 2) if char.lower() in 'aeiou' else char.swapcase() for char in message])