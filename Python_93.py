```
def encode(message):
    result = ''
    for char in message:
        if char.isalpha():
            if char.islower():
                new_char = chr((ord(char) - 97 + 3) % 26 + 97)
            else:
                new_char = chr((ord(char) - 65 + 3) % 26 + 65)
            result += new_char
        else:
            result += char
    return result