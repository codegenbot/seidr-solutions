```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() == 'a' or char.lower() == 'e' or char.lower() == 'i' or char.lower() == 'o' or char.lower() == 'u':
                result += chr((ord(char) - 97 + 3) % 26 + 97)
            else:
                if char.isupper():
                    result += chr((ord(char) - 65 + 1) % 26 + 65)
                else:
                    result += chr((ord(char) - 97 + 1) % 26 + 97)
        else:
            result += char
    return result