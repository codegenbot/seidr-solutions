def encrypt(s):
    encrypted = ""
    for char in s:
        new_char = chr((ord(char) + 2) % 26)
        encrypted += new_char
    return encrypted