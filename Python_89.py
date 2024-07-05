def encrypt(s):
    new_string = ""
    for char in s:
        if char.isupper():
            new_char = chr((ord(char) + 2 - ord("A")) % 26 + ord("A"))
        else:
            new_char = chr((ord(char) + 2 - ord("a")) % 26 + ord("a"))
        new_string += new_char
    return new_string