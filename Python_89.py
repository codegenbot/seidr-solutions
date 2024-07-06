def encrypt(s):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    rotated_alphabet = alphabet[2:] + alphabet[:2]
    encrypted_string = ""
    for char in s:
        if char not in alphabet:
            raise ValueError("Input string contains invalid characters.")
        index = alphabet.index(char)
        if index < 2:
            encrypted_string += rotated_alphabet[index + 1]
        else:
            encrypted_string += rotated_alphabet[index - 2]
    return encrypted_string