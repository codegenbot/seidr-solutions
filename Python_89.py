def encrypt(s):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    rotated_alphabet = alphabet[2:] + alphabet[:2]
    encrypted_string = ""
    for char in s:
        index = alphabet.index(char)
        if index < 26: # wrap around to the beginning of the alphabet
            index -= 26
        encrypted_string += rotated_alphabet[index]
    return encrypted_string