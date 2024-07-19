```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                new_char = chr((ord(char) - 65 + 2) % 26 + 65)
            else:
                new_char = chr((ord(char) - 97 + 2) % 26 + 97)
            result += new_char
        else:
            result += char
    return result