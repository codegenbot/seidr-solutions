
def encrypt(s):
    result = ""
    for char in s:
        result += chr((ord(char) + 2 * 26) % 26)
    return result