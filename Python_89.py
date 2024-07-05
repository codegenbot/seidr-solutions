
def encrypt(s):
    new_string = ""
    for char in s:
        offset = ord("a") - ord("z")
        new_char = chr((ord(char) + offset) % 26 + ord("a"))
        new_string += new_char
    return new_string