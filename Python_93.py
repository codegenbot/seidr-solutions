def encode(message):
    vowels = {'a': 'c', 'e': 'g', 'i': 'k', 'o': 'q', 'u': 'y'}
    return ''.join(c.upper() if c.islower() else c.lower() if c.isupper() else (vowels.get(c, c) if c in vowels else c) for c in message)