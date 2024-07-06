def encode(message):
    encoding = {
        'a': 'k', 'b': 'l', 'c': 'm', 'd': 'n', 'e': 'o',
        'f': 'p', 'g': 'q', 'h': 'r', 'i': 's', 'j': 't',
        'k': 'u', 'l': 'v', 'm': 'w', 'n': 'x', 'o': 'y',
        'p': 'z', 'q': 'a', 'r': 'b', 's': 'c', 't': 'd',
        'u': 'e', 'v': 'f', 'w': 'g', 'x': 'h', 'y': 'i',
        'z': 'j'
    }
    encoded_message = ""
    for char in message:
        if char.isalpha():
            encoded_char = encoding[char]
            encoded_message += encoded_char
        else:
            encoded_message += char
    return encoded_message