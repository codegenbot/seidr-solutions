def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char) + 32) % 26)
            else:
                result += chr((ord(char) - 32) % 26)
        elif char in "aeiouAEIOU":
            if char.isupper():
                result += chr((ord(char) + 2) % 26 + 65)
            else:
                result += chr((ord(char) + 2) % 26 + 97)
        else:
            result += char
    return result