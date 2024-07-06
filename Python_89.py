def encrypt(s):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    rotated_alphabet = alphabet[2:] + alphabet[:2]
    if not all(char.isalpha() for char in s):
        raise ValueError("Input string must only contain alphabetical characters.")
    encrypted_string = ""
    for char in s:
        index = alphabet.index(char)
        if index < 2:
            # If the character is one of the first two characters in the alphabet,
            # add it to the end of the encrypted string.
            encrypted_string += rotated_alphabet[index + 1]
        else:
            # Otherwise, rotate the character by 2 positions and add it to the encrypted string.
            encrypted_string += rotated_alphabet[index - 2]
    return encrypted_string