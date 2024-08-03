def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiouy':
                if char.isupper():
                    result += chr((ord(char) - 65 + 2) % 26 + 65)
                else:
                    result += chr((ord(char) - 97 + 2) % 26 + 97)
            else:
                result += char
        else:
            result += char
    return result