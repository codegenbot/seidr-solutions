```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char in vowels:
                idx = (vowels.index(char) + 2) % len(vowels)
                result += vowels[idx]
            else:
                result += char.swapcase()
        else:
            result += char
    return result