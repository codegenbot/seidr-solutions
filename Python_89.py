def encrypt(s):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    rotated_alphabet = alphabet[2:] + alphabet[:2]
    encrypted_string = ""
    for char in s:
        index = alphabet.index(char) - 1
        if index < 0:
            encrypted_string += rotated_alphabet[index + 1]
        else:
            encrypted_string += rotated_alphabet[index]
    return encrypted_string