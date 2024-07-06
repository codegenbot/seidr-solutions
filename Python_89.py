def encrypt(s):
    encrypted = ''
    for char in s:
        if char.isalpha():
            encrypted += chr((ord(char) - ord('a') + 2) % 26 + ord('a'))
        else:
            encrypted += char
    return encrypted