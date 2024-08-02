def encrypt(s):
    return ''.join([chr((ord(c) - 97 + 2 * 2) % 26 + 97) if c.islower() else c for c in s])