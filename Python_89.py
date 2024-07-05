def encrypt(s):
    padded_input = s + ' ' * (len(s) % 2)
    table = str.maketrans("abcdefghijklmnopqrstuvwxyz", "cdefghijklmnopqrstuvwxyza", padchar=' ')
    return padded_input.translate(table)