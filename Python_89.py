```
def encrypt(s):
    result = ""
    for char in s:
        if char.isalpha():
            ascii_offset = 97 if char.islower() else 65
            encrypted_char = chr((ord(char) - ascii_offset + 2 * 2) % 26 + ascii_offset)
            result += encrypted_char
        else:
            result += char
    return result