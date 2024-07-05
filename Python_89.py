def encrypt(s):
    table = str.maketrans("abcdefghijklmnopqrstuvwxyz", "cdefghijklmnopqrstuvwxyza", padchar=' ')
    return s.translate(table)