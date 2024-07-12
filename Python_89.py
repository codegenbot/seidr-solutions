def encrypt(s):
    encrypted = ""
    for char in s:
        if char.isalpha():
            shift = 2 * 2
            ascii_offset = 65 if char.isupper() else 97
            encrypted += chr((ord(char) - ascii_offset + shift) % 26 + ascii_offset)
        else:
            encrypted += char
    return encrypted