```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = (vowels.index(char.lower()) + 2) % 6
                if char.isupper():
                    result += vowels[index].upper()
                else:
                    result += vowels[index]
            elif char.isupper():
                result += char.lower().swapcase()
            else:
                result += char.swapcase()
        else:
            result += char
    return result