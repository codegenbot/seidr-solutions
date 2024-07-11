def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() == 'a':
                result += 'd'
            elif char.lower() == 'b':
                result += 'e'
            elif char.lower() == 'c':
                result += 'f'
            elif char.lower() == 'd':
                result += 'g'
            elif char.lower() == 'e':
                result += 'h'
            elif char.lower() == 'i':
                result += 'k'
            elif char.lower() == 'j':
                result += 'm'
            elif char.lower() == 'o':
                result += 'q'
            elif char.lower() == 'p':
                result += 's'
            elif char.lower() == 'u':
                result += 'x'
            elif char.isupper():
                if char.lower() == 'a':
                    result += 'd'
                elif char.lower() == 'b':
                    result += 'e'
                elif char.lower() == 'c':
                    result += 'f'
                elif char.lower() == 'd':
                    result += 'g'
                elif char.lower() == 'e':
                    result += 'h'
                elif char.lower() == 'i':
                    result += 'k'
                elif char.lower() == 'j':
                    result += 'm'
                elif char.lower() == 'o':
                    result += 'q'
                elif char.lower() == 'p':
                    result += 's'
                elif char.lower() == 'u':
                    result += 'x'
                else:
                    if ord(char) - 65 + 3 <= 26:
                        result += chr((ord(char) - 65 + 3) % 26 + 65)
                    else:
                        result += chr((ord(char) - 65 - 25) % 26 + 65)
            else:
                result += char
        else:
            result += char
    return result