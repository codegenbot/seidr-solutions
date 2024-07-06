
def encrypt(s):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    shifted_alphabet = alphabet[2:] + alphabet[:2]
    table = str.maketrans(alphabet, shifted_alphabet)
    return s.translate(table)