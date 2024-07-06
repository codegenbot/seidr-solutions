
alphabet = "abcdefghijklmnopqrstuvwxyz"
rotation_dict = {char: alphabet[(alphabet.index(char) + 2) % len(alphabet)] for char in alphabet}

def encrypt(s):
    return ''.join([rotation_dict[c] for c in s])