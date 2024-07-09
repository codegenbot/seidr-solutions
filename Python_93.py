```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char in vowels:
            index = (vowels.index(char) + 2) % 8
            result += vowels[index]
        elif char.isalpha():
            result += char.swapcase()
        else:
            result += char
    return result