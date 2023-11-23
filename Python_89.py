def encrypt(s):
    encrypted_string = ""
    for char in s:
        encrypted_char = chr(ord(char) + (2 * 2))
        encrypted_string += encrypted_char
    return encrypted_string