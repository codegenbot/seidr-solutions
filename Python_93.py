def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if ord(char) - 65 + 3 <= 26:
                result += chr((ord(char) - 65 + 3) % 26 + 65)
            else:
                result += chr((ord(char) - 65 - 25) % 26 + 65)
        else:
            result += char
    return result