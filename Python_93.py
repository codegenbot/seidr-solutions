def encode(message):
    encoded = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                encoded += chr(ord(char) + 2)
            else:
                encoded += chr(ord(char) - 2)
        else:
            encoded += char
    return encoded