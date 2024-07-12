```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() == 'a' or char.lower() == 'e' or char.lower() == 'i' or char.lower() == 'o' or char.lower() == 'u':
                result += chr((ord(char) - 97 + 3) % 26 + 97)
            elif char.lower() == 'A' or char.lower() == 'E' or char.lower() == 'I' or char.lower() == 'O' or char.lower() == 'U':
                result += chr((ord(char) - 65 + 3) % 26 + 65)
            else:
                if char.isupper():
                    result += char.swapcase()
                else:
                    result += char.upper()
        else:
            result += char
    return result