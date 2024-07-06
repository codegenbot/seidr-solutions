def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                result += chr(ord(char) + 2)
            else:
                result += chr(ord(char) - 2)
        else:
            result += char
    return result