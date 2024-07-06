def encrypt(s):
    table = str.maketrans("abcdefghijklmnopqrstuvwxyz", "cdefghijklmnopqrstuvwxyz"[:len(s)])
    return s.translate(table)