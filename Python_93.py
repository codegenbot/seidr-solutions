```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                result += chr((ord(vowels[vowels.index(char.lower())]) - 1 + 2) % 6 + ord('a'))
            else:
                result += char.swapcase()
        else:
            result += char
    return result