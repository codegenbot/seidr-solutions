def encrypt(s):
    new_string = ""
    for char in s.lower():
        if char.isalpha() and char.islower():
            new_char = chr((ord(char) - ord("a") + 2) % 26 + ord("a"))
            new_string += new_char
    return new_string