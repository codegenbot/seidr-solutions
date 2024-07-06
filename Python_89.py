
def encrypt(s):
    encrypted = ""
    for char in s:
        if char.isalpha():
            encrypted += chr((ord(char) - 97) * 2 % 26 + 97)
        else:
            encrypted += char
    return encrypted