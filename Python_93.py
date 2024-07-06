```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                if char == 'A' or char == 'E' or char == 'I' or char == 'O' or char == 'U':
                    result += chr((ord(char) - 65 + 2) % 26 + 65)
                else:
                    result += chr((ord(char) - 65) % 26 + 65)
            elif char.islower():
                if char == 'a' or char == 'e' or char == 'i' or char == 'o' or char == 'u':
                    result += chr((ord(char) - 97 + 2) % 26 + 97)
                else:
                    result += chr((ord(char) - 97) % 26 + 97)
        else:
            result += char
    return result