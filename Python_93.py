```
def encode(message):
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                result += chr((ord(char) - 97 + 3) % 26 + 97)
            elif char.lower() != char:  
                if char.lower() < 'm':
                    shift = 3
                else:
                    shift = -(21 - (ord(char) - 97))
                result += chr((ord(char) - 97 + shift) % 26 + 97).upper() if char.isupper() else chr((ord(char) - 97 + shift) % 26 + 97)
            else:
                result += char
        else:
            result += char
    return result