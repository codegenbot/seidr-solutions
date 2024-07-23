```
def encode(message):
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() == 'a':
                result += 'd'
            elif char.lower() == 'e':
                result += 'h'
            elif char.lower() == 'i':
                result += 'k'
            elif char.lower() == 'o':
                result += 'q'
            elif char.lower() == 'u':
                result += 'x'
            elif char.lower() == 'b':
                result += 'f'
            elif char.lower() == 'f':
                result += 'p'
            elif char.lower() == 'l':
                result += 'm'
            elif char.lower() == 'm':
                result += 'o'
            elif char.lower() == 'p':
                result += 'v'
            elif char.isupper():
                if char.lower() == 'a':
                    result += 'D'
                elif char.lower() == 'e':
                    result += 'H'
                elif char.lower() == 'i':
                    result += 'K'
                elif char.lower() == 'o':
                    result += 'Q'
                elif char.lower() == 'u':
                    result += 'X'
                elif char.lower() == 'b':
                    result += 'F'
                elif char.lower() == 'f':
                    result += 'P'
                elif char.lower() == 'l':
                    result += 'M'
                elif char.lower() == 'm':
                    result += 'O'
                elif char.lower() == 'p':
                    result += 'V'
        else:
            result += char
    return result