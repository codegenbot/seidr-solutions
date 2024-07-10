```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() == 'x' or char.lower() == 'y':
                result += 'AB'.lower()[['X', 'Y'].index(char.upper())]
            elif char.isupper():
                result += chr((ord(char) - 65 + 1) % 26 + 65)
            else:
                result += chr((ord(char) - 97 + 1) % 26 + 97)
        else:
            result += char
    return result