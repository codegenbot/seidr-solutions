```
def encode(message):
    result = ''
    for char in message:
        if char.isalpha():
            if char.islower():
                if char == 'a':
                    result += 'c'
                elif char == 'e':
                    result += 'g'
                elif char == 'i':
                    result += 'k'
                elif char == 'o':
                    result += 'q'
                elif char == 'u':
                    result += 'w'
            else:
                if char == 'A':
                    result += 'C'
                elif char == 'E':
                    result += 'G'
                elif char == 'I':
                    result += 'K'
                elif char == 'O':
                    result += 'Q'
                elif char == 'U':
                    result += 'W'
            else:
                result += char
        else:
            result += char
    return result