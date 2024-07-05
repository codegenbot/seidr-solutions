def encode(message):
    vowel_map = {'a': 'c', 'e': 'g', 'i': 'k', 'o': 'q', 'u': 'w',
                 'A': 'C', 'E': 'G', 'I': 'K', 'O': 'Q', 'U': 'W'}
    return ''.join(vowel_map.get(c, c.swapcase()) for c in message)