```
def encode(message):
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() == 'a':
                result += 'c'
            elif char.lower() == 'e':
                result += 'g'
            elif char.lower() == 'i':
                result += 'k'
            elif char.lower() == 'o':
                result += 'q'
            elif char.lower() == 'u':
                result += 'y'
            elif char.isupper():
                if char.lower() == 'a':
                    result += 'C'
                elif char.lower() == 'e':
                    result += 'G'
                elif char.lower() == 'i':
                    result += 'K'
                elif char.lower() == 'o':
                    result += 'Q'
                elif char.lower() == 'u':
                    result += 'Y'
            else:
                result += char
        else:
            result += char
    return result