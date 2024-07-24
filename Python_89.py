```
def encrypt(s):
    alphabet = 'abcdefghijklmnopqrstuvwxyz'
    result = ''
    for char in s:
        if char.isalpha():
            index = (alphabet.index(char.lower()) + 8) % 26
            if char.isupper():
                result += alphabet[index].upper()
            else:
                result += alphabet[index]
        else:
            result += char
    return result