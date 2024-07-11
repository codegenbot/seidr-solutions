```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            if char.isupper():
                result += chr((ord(char) - ascii_offset + 2) % 26 + ascii_offset)
            else:
                result += chr((ord(char) - ascii_offset + 2) % 26 + ascii_offset).lower()
        else:
            result += char
    return result