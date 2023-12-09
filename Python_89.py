def encrypt(s):
    return ''.join([chr((ord(c) - 2) % 26 + ord('a')) for c in s])