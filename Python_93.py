```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                if 'A' <= char <= 'Z':
                    result += chr((ord(char) - 65 + 1) % 26 + 65)
                else:
                    if char == 'X':
                        result += 'Y'
                    elif char == 'Y':
                        result += 'Z'
                    else:
                        result += chr(ord(char.lower()) + 1).upper()
            else:
                if 'a' <= char <= 'z':
                    if char in ['a', 'e', 'i', 'o', 'u']:
                        if char == 'a':
                            result += 'b'
                        elif char == 'e':
                            result += 'g'
                        elif char == 'i':
                            result += 'k'
                        elif char == 'o':
                            result += 'q'
                        else:
                            result += chr(ord(char) + 1)
                    else:
                        result += chr(ord(char) + 1)
                else:
                    result += char
        else:
            result += char
    return result