"""
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                if 'A' <= char <= 'Z':
                    result += chr((ord(char) - 65 + 1) % 26 + 65)
                else:
                    result += chr((ord(char.lower()) - 97 + 1) % 26 + 97).upper()
            else:
                if 'a' <= char <= 'z':
                    result += chr((ord(char) - 97 + 1) % 26 + 97)
                else:
                    result += char
        else:
            result += char
    return result
"""