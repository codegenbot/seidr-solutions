```Python
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                base = 65
            else:
                base = 97
            if char.isupper():
                result += chr((ord(char) - base + 3) % 26 + base)
            else:
                result += chr((ord(char) - base + 3) % 26 + base)
        else:
            result += char
    return result