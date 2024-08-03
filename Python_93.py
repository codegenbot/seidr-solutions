```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() == 'a':
                result += '@'
            elif char.lower() == 'e':
                result += '3'
            elif char.lower() == 'i':
                result += '1'
            elif char.lower() == 'o':
                result += '0'
            elif char.lower() == 'u':
                result += 'u'
            else:
                if char.islower():
                    result += chr(ord(char) + 3)
                else:
                    result += chr(ord(char) - 3)
        else:
            result += char
    return result