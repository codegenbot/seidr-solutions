def encrypt(s):
    encrypted = ""
    for char in s:
        encrypted += chr((ord(char) - 2) % 26 + ord("a"))
    return encrypted