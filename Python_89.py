
def encrypt(s):
    result = ''
    for char in s:
        result += chr((ord(char) - ord('a') + 2 * 2) % 26 + ord('a'))
    return result