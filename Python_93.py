def encode(message):
    result = ""
    for char in message:
        if char == ' ':
            result += ' '
        elif char.isalpha():
            result += chr((ord(char) - (ord('a' if char.islower() else 'A')) + 2) % 26 + (ord('a' if char.islower() else 'A')))
        else:
            result += char
    return result