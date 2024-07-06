
def encrypt(s):
    encrypted = ''
    for c in s:
        if c.isalpha():
            encrypted += chr((ord(c) - ord('a') + 2) % 26 + ord('a'))
        else:
            encrypted += c
    return encrypted