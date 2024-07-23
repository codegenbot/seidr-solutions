def encode(message):
    result = ''
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
                result += 'i'
            elif char.lower() == 'f':
                result += 'k'
            elif char.lower() == 'g':
                result += 'm'
            elif char.lower() == 'h':
                result += 'o'
            elif char.lower() == 'i':
                result += 'q'
            elif char.lower() == 'j':
                result += 'r'
            elif char.lower() == 'k':
                result += 'v'
            elif char.lower() == 'l':
                result += 'x'
            elif char.lower() == 'm':
                result += 'z'
            elif char.lower() == 'n':
                result += 'b'
            elif char.lower() == 'o':
                result += 'd'
            elif char.lower() == 'p':
                result += 'f'
            elif char.lower() == 'q':
                result += 'h'
            elif char.lower() == 'r':
                result += 'j'
            elif char.lower() == 's':
                result += 'l'
            elif char.lower() == 't':
                result += 'n'
            elif char.lower() == 'u':
                result += 'p'
            elif char.lower() == 'v':
                result += 'r'
            elif char.lower() == 'w':
                result += 't'
            elif char.lower() == 'x':
                result += 'v'
            elif char.lower() == 'y':
                result += 'z'
            elif char.lower() == 'z':
                result += 'y'
            else:
                if char.isupper():
                    result += chr((ord(char) + 3) % 26 + 65)
                else:
                    result += char
        else:
            result += char