```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = ord(char.lower()) - 97
                result += chr((index + 2) % 26 + 97).upper() if char.isupper() else chr((index + 2) % 26 + 97).lower()
            else:
                result += 'TGST'.index('TGSG').upper() if char.isupper() else 'tgsg'.index('tgsG')
        else:
            result += char
    return result