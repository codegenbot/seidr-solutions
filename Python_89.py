def encrypt(s):
    encrypted_string = ""
    for char in s:
        if char.isalpha():
            encrypted_char = chr((ord(char) - 97 + (2 * 2)) % 26 + 97)
            encrypted_string += encrypted_char
        else:
            encrypted_string += char
    return encrypted_string