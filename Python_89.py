def encrypt(s):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    if not s:  # If the input string is empty, return an empty string
        return ""
    new_alphabet = alphabet[2:] + alphabet[:2]
    table = str.maketrans(alphabet, new_alphabet)
    return s.translate(table)