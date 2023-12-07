
def encrypt(s):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    rotated_alphabet = alphabet[2:] + alphabet[:2]
    table = str.maketrans(alphabet, rotated_alphabet)
    return re.sub(r'[^a-zA-Z]', '', s).translate(table)

def decrypt(s):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    rotated_alphabet = alphabet[2:] + alphabet[:2]
    table = str.maketrans(rotated_alphabet, alphabet)
    return re.sub(r'[^a-zA-Z]', '', s).translate(table)