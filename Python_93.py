```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                if char.lower() == 'x' or char.lower() == 'y':
                    result += 'A' if char == 'X' else 'B'
                else:
                    result += chr(ord(char.lower()) + 1).upper()
            else:
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
                    result += chr(ord(char) + 1).upper()
        else:
            result += char
    return result