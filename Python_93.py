def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char) - 65 + 13) % 26).upper()
            else:
                result += chr((ord(char) - 97 + 13) % 26)
        else:
            result += char
    return result