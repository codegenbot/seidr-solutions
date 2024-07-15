def encrypt(s):
    return ''.join([chr((ord(c) - ord('a') + 2 * 2) % 26 + ord('a')) if c.islower() else c for c in s])