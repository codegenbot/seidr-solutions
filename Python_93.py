```
def encode(message):
    result = ""
    vowels = {'a': 'u', 'b': 'v', 'c': 'w', 'd': 'x', 'e': 'y', 'f': 'z', 
              'g': 'i', 'h': 'j', 'i': 'o', 'j': 'p', 'k': 'q', 'l': 'r', 
              'm': 's', 'n': 't', 'o': 'e', 'p': 'f', 'q': 'g', 'r': 'h', 
              's': 'i', 't': 'j', 'u': 'k', 'v': 'l', 'w': 'm', 'x': 'n', 
              'y': 'o', 'z': 'p'}
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                result += vowels[char.lower()].upper() if char.isupper() else vowels[char.lower()]
            else:
                result += char.swapcase()
        else:
            result += char