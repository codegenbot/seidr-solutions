```
def encrypt(s):
    result = ""
    for char in s:
        if char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            shift = (ord(char) - ascii_offset + 3) % 26
            result += chr((shift + ascii_offset) if char.isupper() else shift + 32)
        else:
            result += char
    return result