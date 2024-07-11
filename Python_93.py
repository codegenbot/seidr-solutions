```
def encode(message):
    result = ""
    last_alphanumeric = True
    for char in message:
        if char.isalpha():
            if char.isupper():
                if last_alphanumeric:
                    result += chr((ord(char) - 65 + 2) % 26 + 65)
                else:
                    result += chr((ord(char) - 65 + 2) % 26 + 65).lower()
            else:
                if last_alphanumeric:
                    result += chr((ord(char) - 97 + 2) % 26 + 97)
                else:
                    result += chr((ord(char) - 97 + 2) % 26 + 97).upper()
            last_alphanumeric = True
        else:
            result += char
            last_alphanumeric = False
    return result