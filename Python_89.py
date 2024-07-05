
def encrypt(s):
    new_string = ""
    for char in s:
        if char.islower():
            new_char = chr((ord(char) + 2) % 26 + ord("a"))
        else:
            new_char = char.upper()
        new_string += new_char
    return new_string