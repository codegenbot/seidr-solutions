def encrypt(s):
    return ''.join([chr((ord(char) - 97 + 2 * 2) % 26 + 97) if char.islower() else chr((ord(char) - 65 + 2 * 2) % 26 + 65) if char.isupper() else char for char in s])