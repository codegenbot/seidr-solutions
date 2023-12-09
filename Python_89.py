def encrypt(s):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    encrypted_alphabet = alphabet[2:] + alphabet[:2]
    encrypted_string = ""
    for char in s:
        index = alphabet.index(char)
        encrypted_string += encrypted_alphabet[index]
    return encrypted_string