def encrypt(s):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    encrypted_alphabet = "cdefghijklmnopqrstuvwxyzab"
    encrypted_string = ""
    for char in s:
        index = alphabet.find(char)
        if index != -1:
            encrypted_string += encrypted_alphabet[index]
    return encrypted_string