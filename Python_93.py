import string

def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            alphabet = string.ascii_lowercase if char.islower() else string.ascii_uppercase
            result += chr((ord(char) - ord(alphabet[0]) + 2) % 26 + ord(alphabet[0]))
        else:
            result += char
    return result