table = str.maketrans("abcdefghijklmnopqrstuvwxyz", "cdefghijklmnopqrstuvwxyza ")


def encrypt(s):
    return s.translate(table)