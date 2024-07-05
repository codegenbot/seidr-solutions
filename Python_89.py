def encrypt(s):
    table = str.maketrans("abcdefghijklmnopqrstuvwxyz", "cdefghijklmnopqrstuvwxyza")
    return s.translate(table)


encrypt("Hello, World!")  # returns "Ifmmp, Xpsme!"