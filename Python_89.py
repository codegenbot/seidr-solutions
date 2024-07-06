
from itertools import rotate
def encrypt(s):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    rotated_alphabet = rotate(alphabet, 2)
    encrypted_string = ""
    for char in s:
        index = alphabet.index(char)
        encrypted_string += rotated_alphabet[index]
    return encrypted_string