
def encrypt(s):
    table = str.maketrans({"a": "c", "b": "d", ...})
    return s.translate(table)