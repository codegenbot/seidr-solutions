```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = ord(vowels[vowels.index(char.lower())]) - 97
                if char.isupper():
                    result += chr((index + 2) % 26 + 65)
                else:
                    result += chr((index + 2) % 26 + 97)
            elif char.isupper():
                result += char.lower()
            else:
                result += char.upper()
        else:
            result += char
    return result