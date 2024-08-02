```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char) + 7) % 26)
            else:
                result += chr((ord(char) - 97 + 7) % 26).upper()
        else:
            result += char
    return result