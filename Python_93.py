```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() == 'a' or char.lower() == 'e' or char.lower() == 'i' or char.lower() == 'o' or char.lower() == 'u':
                if char.isupper():
                    result += chr((ord(char) - 65 + 3) % 26 + 65)
                else:
                    result += chr((ord(char) - 97 + 3) % 26 + 97)
            elif char.lower() == 'y' or char.lower() == 'Y':
                if char.isupper():
                    result += 'Z'
                else:
                    result += 'z'
            else:
                if char.isupper():
                    result += char.swapcase()
                else:
                    result += char
        else:
            result += char
    return result