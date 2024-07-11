```
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
            elif char.lower() == 'f':
                result += 'i'
            elif char.lower() == 'g':
                result += 'j'
            elif char.lower() == 'h':
                result += 'k'
            elif char.lower() == 'i':
                result += 'l'
            elif char.lower() == 'j':
                result += 'm'
            elif char.lower() == 'k':
                result += 'n'
            elif char.lower() == 'l':
                result += 'o'
            elif char.lower() == 'm':
                result += 'p'
            elif char.lower() == 'n':
                result += 'q'
            elif char.lower() == 'o':
                result += 'r'
            elif char.lower() == 'p':
                result += 's'
            elif char.lower() == 'q':
                result += 't'
            elif char.lower() == 'r':
                result += 'u'
            elif char.lower() == 's':
                result += 'v'
            elif char.lower() == 't':
                result += 'w'
            elif char.lower() == 'u':
                result += 'x'
            elif char.lower() == 'v':
                result += 'y'
            elif char.lower() == 'w':
                result += 'z'
            elif char.lower() == 'x':
                result += 'a'
            elif char.lower() == 'y':
                result += 'b'
            elif char.lower() == 'z':
                result += 'c'
            else:
                if char.isupper():
                    result += char.swapcase()
                else:
                    result += char
        else:
            result += char
    return result