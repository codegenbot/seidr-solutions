def encrypt(s):
    if not s:  # Check if the input string is empty
        return ""  # Return an empty string if it is
    
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    rotated_alphabet = alphabet[2:] + alphabet[:2]
    table = str.maketrans(alphabet, rotated_alphabet)
    return s.translate(table)