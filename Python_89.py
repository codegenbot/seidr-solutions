def encrypt(s):
    return ''.join([chr(ord(char) + 2 * 2) if char.isalpha() else char for char in s])