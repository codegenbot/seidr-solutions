```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                if ord(char) - 65 < 25:
                    result += chr(ord(char) + 1)
                else:
                    result += 'A'
            else:
                if ord(char) - 97 < 23:
                    result += chr(ord(char) + 1)
                elif char == 'u':
                    result += 'v'
                else:
                    result += 'a' if char == 'z' else chr(ord(char) + 1)
        else:
            result += char
    return result