def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if 'aeiouAEIOU'.count(char.lower()) == 0:
                if char.islower():
                    if char == 'a':
                        result += 'c'
                    elif char == 'b':
                        result += 'd'
                    elif char == 'c':
                        result += 'e'
                    elif char == 'd':
                        result += 'f'
                    elif char == 'e':
                        result += 'g'
                    elif char == 'f':
                        result += 'h'
                    elif char == 'g':
                        result += 'i'
                    elif char == 'h':
                        result += 'j'
                    elif char == 'i':
                        result += 'k'
                    elif char == 'j':
                        result += 'l'
                    elif char == 'k':
                        result += 'm'
                    elif char == 'l':
                        result += 'n'
                    elif char == 'm':
                        result += 'o'
                    elif char == 'n':
                        result += 'p'
                    elif char == 'o':
                        result += 'q'
                    elif char == 'p':
                        result += 'r'
                    elif char == 'q':
                        result += 's'
                    elif char == 'r':
                        result += 't'
                    elif char == 's':
                        result += 'u'
                    elif char == 't':
                        result += 'v'
                    elif char == 'u':
                        result += 'w'
                    elif char == 'v':
                        result += 'x'
                    elif char == 'w':
                        result += 'y'
                    elif char == 'x':
                        result += 'z'
                    elif char == 'z':
                        result += 'a' 
                else:
                    if char == 'A':
                        result += 'C'
                    elif char == 'B':
                        result += 'D'
                    elif char == 'C':
                        result += 'E'
                    elif char == 'D':
                        result += 'F'
                    elif char == 'E':
                        result += 'G'
                    elif char == 'F':
                        result += 'H'
                    elif char == 'G':
                        result += 'I'
                    elif char == 'H':
                        result += 'J'
                    elif char == 'I':
                        result += 'K'
                    elif char == 'J':
                        result += 'L'
                    elif char == 'K':
                        result += 'M'
                    elif char == 'L':
                        result += 'N'
                    elif char == 'M':
                        result += 'O'
                    elif char == 'N':
                        result += 'P'
                    elif char == 'O':
                        result += 'Q'
                    elif char == 'P':
                        result += 'R'
                    elif char == 'Q':
                        result += 'S'
                    elif char == 'R':
                        result += 'T'
                    elif char == 'S':
                        result += 'U'
                    elif char == 'T':
                        result += 'V'
                    elif char == 'U':
                        result += 'W'
                    elif char == 'V':
                        result += 'X'
                    elif char == 'W':
                        result += 'Y'
                    elif char == 'X':
                        result += 'Z'
                    elif char == 'Z':
                        result += 'A' 
            else:
                if char.islower():
                    result += char.swapcase()
                else:
                    result += char.swapcase()
        else:
            result += char
    return result