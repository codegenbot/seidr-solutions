```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = (vowels.index(char.lower()) + 2) % 6
                result += vowels[index].upper() if char.isupper() else vowels[index]
            else:
                result += 'TGST'.index('TGST'[0].upper() if char.isupper() else 'TGST')[0]
        else:
            result += char
    return result