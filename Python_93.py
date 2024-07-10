def encode(message):
    vowels = {'a': 'c', 'e': 'g', 'i': 'k', 'o': 'q', 'u': 'y'}
    result = ''
    for char in message:
        if char.isalpha():
            if char.isupper():
                if char.lower() in vowels:
                    result += chr((ord(char) - ord('A') + 3) % 26 + ord('A'))
                else:
                    result += char.swapcase()
            else:
                if char.lower() in vowels:
                    result += vowels[char.lower()].swapcase()
                else:
                    result += char
        else:
            result += char
    return result