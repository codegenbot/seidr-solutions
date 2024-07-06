def encrypt(s):
    encrypted = ""
    for char in s.lower():
        encrypted += chr((ord(char) - 97) * 2 % 26 + 97)
    return encrypted