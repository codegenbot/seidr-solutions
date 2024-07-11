def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if ord(char) - 97 + 3 <= 26:
                result += chr((ord(char) - 97 + 3) % 26 + 97)
            else:
                result += chr((ord(char) - 97 - 25) % 26 + 97)
        else:
            result += char
    return result