```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = ord(vowels[vowels.index(char.lower())]) - 97
                result += chr((index + 2) % 26 + 97)
            else:
                result += char.swapcase()
        else:
            result += char
    return result