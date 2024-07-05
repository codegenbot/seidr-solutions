def encrypt(s):
    new_string = ""
    for char in s:
        if char.islower() or (char.isalpha() and ord(char) >= ord("a")):
            new_char = chr((ord(char) + 2 - ord("a")) % 26 + ord("a"))
            new_string += new_char
    return new_string