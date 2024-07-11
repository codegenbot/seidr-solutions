```
def encrypt(s):
    result = ''
    for char in s:
        if char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            encrypted_char = chr((ord(char) - ascii_offset + (2 * 2)) % 26 + ascii_offset)
            result += encrypted_char
        else:
            result += char
    return result