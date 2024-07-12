def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            shift = 3 if char.islower() else -24
            result += chr((ord(char.lower()) - 97 + shift) % 26 + 97)
            if char.isupper():
                result = result.upper()
        else:
            result += char
    return result