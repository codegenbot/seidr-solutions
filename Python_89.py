def encrypt(s):
    return ''.join(chr((ord(char) - ord('a') + 2 * 2) % 26 + ord('a')) if char.islower() else char for char in s)