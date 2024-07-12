def decode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char) - 65 - 2) % 26 + 65)
            else:
                result += chr((ord(char) - 97 - 2) % 26 + 97)
        else:
            result += char
    return result