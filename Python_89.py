```
def encrypt(s):
    encrypted = ''
    for char in s:
        if char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            encrypted += chr((ord(char) - ascii_offset + 2*2) % 26 + ascii_offset)
        else:
            encrypted += char
    return encrypted