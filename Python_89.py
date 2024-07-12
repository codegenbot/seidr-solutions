def encrypt(s):
    return ''.join(chr(((ord(c) - 97 + 2 * 2) % 26) + 97) if c.islower() else chr(((ord(c) - 65 + 2 * 2) % 26) + 65) if c.isupper() else c for c in s)