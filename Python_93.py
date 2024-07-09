def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char) + 13) % 26)
            else:
                result += chr((ord(char) - 97 + 13) % 26 + 97).lower()
        else:
            result += char
    return result