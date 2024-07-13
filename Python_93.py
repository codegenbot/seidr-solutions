```
def encode(message):
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                result += chr((ord(char) - 97 + 2) % 26 + 97)
            elif char.lower() in 'AEIOU':
                result += chr((ord(char) - 65 + 2) % 26 + 65)
            else:
                if char.islower():
                    result += chr(ord(char) + 0)
                else:
                    result += char.swapcase()
        else:
            result += char
    return result