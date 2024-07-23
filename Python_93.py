```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() == 'a':
                result += 'd'
            elif char.lower() == 'b':
                result += 'f'
            elif char.lower() == 'c':
                result += 'g'
            elif char.lower() == 'd':
                result += 'h'
            elif char.lower() == 'e':
                result += 'k'
            elif char.lower() == 'f':
                result += 'm'
            elif char.lower() == 'g':
                result += 'p'
            elif char.lower() == 'h':
                result += 'q'
            elif char.lower() == 'i':
                result += 'v'
            elif char.lower() == 'j':
                result += 'w'
            elif char.lower() == 'k':
                result += 'x'
            elif char.lower() == 'l':
                result += 'y'
            elif char.lower() == 'm':
                result += 'z'
            elif char.lower() == 'n':
                result += 'b'
            elif char.lower() == 'o':
                result += 'c'
            elif char.lower() == 'p':
                result += 'e'
            elif char.lower() == 'q':
                result += 'f'
            elif char.lower() == 'r':
                result += 'h'
            elif char.lower() == 's':
                result += 'i'
            elif char.lower() == 't':
                result += 'k'
            elif char.lower() == 'u':
                result += 'm'
            elif char.lower() == 'v':
                result += 'n'
            elif char.lower() == 'w':
                result += 'p'
            elif char.lower() == 'x':
                result += 'r'
            elif char.lower() == 'y':
                result += 't'
            elif char.lower() == 'z':
                result += 'u'
            else:
                if char.isupper():
                    result += char.lower()
                else:
                    result += char.upper()
        else:
            result += char
    return result