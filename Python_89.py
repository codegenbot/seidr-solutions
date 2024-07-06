def encrypt(s):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    rotated_alphabet = alphabet[2:] + alphabet[:2]
    encrypted_string = ""
    for char in s:
        index = alphabet.index(char)
        if index < 2:
            # If the character is one of the first two characters in the alphabet,
            # add it to the end of the encrypted string.
            encrypted_string += rotated_alphabet[index + 1]
        elif index == len(alphabet) - 1:
            # If the character is already at the end of the alphabet,
            # add it back to the beginning of the encrypted string.
            encrypted_string = rotated_alphabet[0] + encrypted_string
        else:
            # Otherwise, rotate the character by 2 positions and add it to the encrypted string.
            encrypted_string += rotated_alphabet[index - 2]
    return encrypted_string