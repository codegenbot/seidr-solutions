def encrypt(s):
    return ''.join([chr(ord(char) + 2 * 2) for char in s])