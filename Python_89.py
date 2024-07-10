```
def encrypt(s):
    result = ""
    for char in s:
        if char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            result += chr((ord(char) - ascii_offset + 2 * 26) % 26 + ascii_offset)
        else:
            result += char
    return result