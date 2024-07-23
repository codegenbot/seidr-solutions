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
            else:
                result += char
        else:
            result += char
    return result