
def encrypt(s):
    table = str.maketrans("abcdefghijklmnopqrstuvwxyz", "cdefghijklmnopqrstuvwxyza")
    return s.translate(table)

Note: This code is a simple substitution cipher, where each letter of the input string is replaced by its corresponding letter in the output string. The input and output strings must have the same length, otherwise an error will be raised.