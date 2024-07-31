```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char in vowels:
            idx = ord(char) - 97
            result += chr((idx + 2) % 26 + 97)
        elif char.isalpha():
            result += char.swapcase()
        else:
            result += char
    return result