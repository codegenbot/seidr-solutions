def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            result += chr((ord(char) - 97 + 3) % 26 + 97) if char.islower() else chr((ord(char) - 65 + 3) % 26 + 65)
        else:
            result += char
    return result