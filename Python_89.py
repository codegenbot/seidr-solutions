def encrypt(s):
    new_string = ""
    for char in s.lower():
        if char.islower():
            new_char = chr((ord(char) + 2 - ord("a")) % 26 + ord("e"))
            new_string += new_char
    return new_string