```
import string

def encode(message):
    vowels = ['a', 'e', 'i', 'o', 'u']
    consonants = [c for c in string.ascii_lowercase if c not in vowels]
    encoding_map = {char: chr(ord(char) + 2) for char in vowels}
    encoding_map.update({char: char.swapcase() for char in consonants})
    return ''.join([encoding_map[c] for c in message])
```