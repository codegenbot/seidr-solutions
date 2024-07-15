```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                if char == 'X':
                    result += 'A'
                elif char == 'Y':
                    result += 'B'
                else:
                    result += chr(ord(char) + 2)
            else:
                if char == 'a' or char == 'e' or char == 'i' or char == 'o' or char == 'u':
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