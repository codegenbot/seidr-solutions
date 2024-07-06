
def encrypt(s):
    encrypted = ''
    for c in s:
        if c == ' ':
            encrypted += ' '
        else:
            encrypted += chr((ord(c) - ord('a') + 2) % 26 + ord('a'))
    return encrypted