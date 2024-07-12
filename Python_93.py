def encode(message):
    if message is None or len(message) == 0:
        return ""

    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr(((ord(char) - 65 + 3) % 26) + 65)
            else:
                result += chr(((ord(char) - 97 + 3) % 26) + 97)
        else:
            result += char
    return result