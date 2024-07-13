def encrypt(s):
    return ''.join(chr((ord(char) - 97 + 2 * 2) % 26 + 97) if char.isalpha() else char for char in s)