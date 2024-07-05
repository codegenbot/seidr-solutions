def encrypt(s):
    new_string = ""
    for char in s:
        new_char = chr((ord(char) - ord("a") + 2) % 26 + ord("a"))
        new_string += new_char
    return new_string