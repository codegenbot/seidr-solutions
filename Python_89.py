def encrypt(s):
    result = ""
    for char in s:
        new_char = chr((ord(char) - 65) * 2 + 65)
        result += new_char
    return result