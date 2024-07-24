def encode(message):
    result = ""
    for char in message:
        if not char.isalpha():
            result += char
        else:
            if char.isupper():
                result += chr((ord(char) - 65 + 3) % 26 + 65)
            else:
                result += chr((ord(char) - 97 + 3) % 26 + 97)
    return result