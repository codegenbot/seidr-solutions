def encode(message):
    result = ""
    for char in message:
        if char == ' ':
            result += ' '
        elif char.isalpha():
            if char.isupper():
                result += chr((ord(char) - 65 + 3) % 26 + 65)
            else:
                result += chr((ord(char) - 96 + 3) % 26 + 97)
        else:
            result += char
    return result