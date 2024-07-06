```
def encode(message):
    vowels = {'a': 'c', 'e': 'g', 'i': 'k', 'o': 'q', 'u': 'y'}
    return ''.join((c.upper() if c.isalpha() and c.lower() not in vowels else 
                    c.swapcase() if c.lower() in vowels else 
                    c).lower() for c in message)