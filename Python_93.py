```
def encode(message):
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() == 'a' or char.lower() == 'e' or char.lower() == 'i' or char.lower() == 'o' or char.lower() == 'u':
                if char.lower() == 'a':
                    result += 'c'
                elif char.lower() == 'e':
                    result += 'g'
                elif char.lower() == 'i':
                    result += 'k'
                elif char.lower() == 'o':
                    result += 'q'
                else:
                    result += 's'
            elif char.isupper():
                if char == 'A':
                    result += 'C'
                elif char == 'E':
                    result += 'G'
                elif char == 'I':
                    result += 'K'
                elif char == 'O':
                    result += 'Q'
                else:
                    result += 'S'
            else:
                result += char
        else:
            result += char
    return result