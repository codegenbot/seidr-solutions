```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char in vowels:
            index = (vowels.index(char) + 2) % 6
            result += vowels[index]
        else:
            result += char.swapcase()
    return result