```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() == 'a':
                result += '1'
            elif char.lower() == 'b':
                result += '2'
            elif char.lower() == 'c':
                result += '3'
            elif char.lower() == 'd':
                result += '4'
            elif char.lower() == 'e':
                result += '5'
            elif char.lower() == 'f':
                result += '6'
            elif char.lower() == 'g':
                result += '7'
            elif char.lower() == 'h':
                result += '8'
            elif char.lower() == 'i':
                result += '9'
            elif char.lower() == 'j':
                result += '!'
            elif char.lower() == 'k':
                result += '@'
            elif char.lower() == 'l':
                result += '#'
            elif char.lower() == 'm':
                result += '$'
            elif char.lower() == 'n':
                result += '%'
            elif char.lower() == 'o':
                result += '^'
            elif char.lower() == 'p':
                result += '&'
            elif char.lower() == 'q':
                result += '*'
            elif char.lower() == 'r':
                result += '('
            elif char.lower() == 's':
                result += ')'
            elif char.lower() == 't':
                result += '_'
            elif char.lower() == 'u':
                result += '+'
            elif char.lower() == 'v':
                result += '='
            elif char.lower() == 'w':
                result += '-'
            elif char.lower() == 'x':
                result += '<'
            elif char.lower() == 'y':
                result += '>'
            elif char.lower() == 'z':
                result += '?'
            else:
                if char.islower():
                    result += chr(ord(char) - 97 + 65)
                else:
                    result += chr(ord(char) - 65)
        else:
            result += char
    return result