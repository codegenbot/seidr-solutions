def encrypt(s):
    table = str.maketrans("abcdefghijklmnopqrstuvwxyz", "cdefghijklmnopqrstuvwxyza ")
    return s.translate(table)