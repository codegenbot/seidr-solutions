```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char in vowels:
            index = (vowels.index(char) + 2) % len(vowels)
            result += vowels[index]
        elif char.isalpha():
            if char.isupper():
                result += char.swapcase()
            else:
                result += char.upper()
        else:
            result += char
    return result