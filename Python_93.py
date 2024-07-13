```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                if char == 'X':
                    result += 'A'
                elif char == 'Y' or char == 'Z':
                    result += 'B' if char == 'Y' else 'C'
                else:
                    result = result + chr((ord(char) - 65 + 2) % 26 + 65)
            else:
                if char == 'a':
                    result += 'b'
                elif char == 'e' or char == 'i' or char == 'o' or char == 'u':
                    result = result + chr((ord(char) - 97 + 4) % 26 + 97)
                else:
                    result = result + chr((ord(char) - 97 + 2) % 26 + 97)
        else:
            result += char
    return result