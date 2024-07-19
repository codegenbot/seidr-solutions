```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() == 'a' or char.lower() == 'e' or char.lower() == 'i' or char.lower() == 'o' or char.lower() == 'u':
                if char.isupper():
                    result += chr((ord(char) - 65 + 2) % 26 + 65)
                else:
                    result += chr((ord(char) - 97 + 2) % 26 + 97)
            elif char.isupper():
                result += chr((ord(char) - 65 + 1) % 26 + 65).swapcase()
            else:
                result += chr((ord(char) - 97 + 1) % 26 + 97).swapcase()
        else:
            result += char
    return result