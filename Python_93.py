```
def encode(message):
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() == 'a':
                result += 'd'
            elif char.lower() == 'e':
                result += 'h'
            elif char.lower() == 'i':
                result += 'l'
            elif char.lower() == 'o':
                result += 'r'
            elif char.lower() == 'u':
                result += 'x'
            else:
                if char.isupper():
                    result += chr((ord(char) - 65 + 3) % 26 + 65)
                else:
                    result += chr((ord(char) - 97 + 3) % 26 + 97)
        else:
            result += char
    return result