```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = (vowels.index(char.lower()) + 2) % 6
                result += vowels[index].upper() if char.isupper() else vowels[index].lower()
            else:
                result += 'T' if char.upper() == 't' else 't' if char.lower() == 't' else char.swapcase()
        else:
            result += char
    return result