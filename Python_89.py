def encrypt(s):
    encrypted = ""
    for char in s:
        if char.isalpha():
            if char.isupper():
                encrypted += chr((ord(char) - 65 + 2 * 2) % 26 + 65)
            else:
                encrypted += chr((ord(char) - 97 + 2 * 2) % 26 + 97)
        else:
            encrypted += char
    return encrypted