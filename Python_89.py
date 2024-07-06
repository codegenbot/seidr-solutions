
def encrypt(s):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    new_alphabet = alphabet[2:] + alphabet[:2]
    table = str.maketrans(alphabet, new_alphabet)
    return s.translate(table)