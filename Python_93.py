```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char in vowels:
            index = (vowels.index(char) + 2) % len(vowels)
            result += vowels[index]
        else:
            result += char.swapcase()
    return result