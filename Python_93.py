```Python
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                if char == 'X' or char == 'x':
                    result += 'A'
                else:
                    result += chr(ord(char) + 1)
            else:
                if char in ['a', 'e', 'i', 'o', 'u']:
                    if char == 'a':
                        result += 'c'
                    elif char == 'e':
                        result += 'g'
                    elif char == 'i':
                        result += 'k'
                    elif char == 'o':
                        result += 'q'
                    else:
                        result += 's'
                else:
                    result += chr(ord(char) + 1)
        else:
            result += char
    return result