def encrypt(s):
    new_string = ""
    for char in s:
        index = ord(char) - 65
        if index < 26:
            new_index = (index + 2) % 26
            new_string += chr(new_index + 65)
    return new_string