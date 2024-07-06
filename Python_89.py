def encrypt(s):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    encrypted_alphabet = alphabet[2:] + alphabet[:2]
    encrypted_string = ""
    for char in s:
        if char.isalpha():
            encrypted_char = encrypted_alphabet[alphabet.index(char)]
            encrypted_string += encrypted_char
        else:
            encrypted_string += char
    return encrypted_string