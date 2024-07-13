```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                if char == 'X' or char == 'x':
                    result += char
                else:
                    result += chr((ord(char) - 65 + 2) % 26 + 65)
            elif char.islower():
                if char == 'x' or char == 'X':
                    result += char
                else:
                    result += chr((ord(char) - 97 + 2) % 26 + 97)
        else:
            result += char
    return result