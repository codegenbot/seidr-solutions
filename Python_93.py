```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.upper() in vowels:
                index = (vowels.index(char.upper()) + 2) % 6
                result += vowels[index].upper() if char.isupper() else vowels[index].lower()
            else:
                result += 'TGST'[0] if char == 't' or char == 'T' else char.swapcase()
        else:
            result += char
    return result