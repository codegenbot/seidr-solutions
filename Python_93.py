```
def encode(message):
    result = ""
    for char in message:
        if char.isalnum():
            if char.isalpha():
                if char.isupper():
                    result += chr((ord(char) - 65 + 3) % 26 + 65)
                else:
                    result += chr((ord(char) - 97 + 3) % 26 + 97)
            else:
                if char.isdigit():
                    result += str(int(char) + 3) if int(char) < 9 else '0'
                else:
                    result += str(char)
        else:
            result += str(char)
    return result