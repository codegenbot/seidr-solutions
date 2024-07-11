def encrypt(s):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    encrypted_s = ""
    for char in s:
        if char.isalpha():
            index = (alphabet.index(char.lower()) + 4) % 26
            if char.isupper():
                encrypted_s += alphabet[index].upper()
            else:
                encrypted_s += alphabet[index]
        else:
            encrypted_s += char
    return encrypted_s