def encrypt(s):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    rotated_alphabet = alphabet[2:] + alphabet[:2]
    encrypted_string = ""
    for char in s:
        if char not in alphabet:
            raise ValueError("Input string contains invalid characters.")
        index = alphabet.index(char)
        if index < 2:
            # If the character is one of the first two characters in the alphabet,
            # add it to the end of the encrypted string.
            encrypted_string += rotated_alphabet[index + 1]
        else:
            # Otherwise, rotate the character by 2 positions and add it to the encrypted string.
            encrypted_string += rotated_alphabet[index - 2]
    return encrypted_string