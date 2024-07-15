```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = (vowels.index(char.lower()) + 2) % 5
                if char.isupper():
                    result += vowels[vowels.index(char.lower()) + 2].upper()
                else:
                    result += vowels[vowels.index(char.lower()) + 2]
            else:
                result += char.upper() if char.islower() else char
        else:
            result += char
    return result