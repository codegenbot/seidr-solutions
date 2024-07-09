```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                char = chr((ord(char) - 97 + 2) % 26 + 97)
            else:
                char = chr((ord(char) - 65 + 2) % 26 + 65)
        result += char
    return result