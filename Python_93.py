```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                if char == 'X' or char == 'x':
                    result += 'Z'
                elif char == 'Y' or char == 'y':
                    result += 'Z'
                else:
                    result += chr(ord(char) + 1)
            else:
                if char == 'a' or char == 'A':
                    result += 'c'
                elif char == 'e' or char == 'E':
                    result += 'g'
                elif char == 'i' or char == 'I':
                    result += 'k'
                elif char == 'o' or char == 'O':
                    result += 'q'
                elif char == 'u' or char == 'U':
                    result += 'w'
                else:
                    result += chr(ord(char) + 2)
        else:
            result += char
    return result