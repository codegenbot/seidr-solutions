```
def encode(message):
    result = ""
    for char in message:
        if char.isalnum():
            if char.isalpha():
                shift = 3
                ascii_offset = 65 if char.isupper() else 97
                result += chr((ord(char) - ascii_offset + shift) % 26 + ascii_offset)
            else:
                result += char
        else:
            result += char
    return result