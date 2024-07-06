def encrypt(s):
    result = ""
    for char in s:
        index = ord(char) - 65
        new_index = (index + 2) % 26
        new_char = chr(new_index + 65)
        result += new_char
    return result