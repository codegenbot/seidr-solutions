def encrypt(s):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    rotated_alphabet = alphabet[2:] + alphabet[:2]
    encrypted = ""
    for char in s:
        index = alphabet.index(char)
        encrypted += rotated_alphabet[index]
    return encrypted