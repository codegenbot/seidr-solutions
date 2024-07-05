def encrypt(s):
    # Create a translation table that maps each letter to its encrypted value
    table = str.maketrans("abcdefghijklmnopqrstuvwxyz", "cdefghijklmnopqrstuvwxyza")
    return s.translate(table)