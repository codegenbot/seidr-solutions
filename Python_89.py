def encrypt(s):
    encrypted_string = ""
    for char in s:
        if char.isalpha():
            ascii_value = ord(char)
            shifted_value = ascii_value + (2 * 2)
            if char.isupper():
                if shifted_value > ord('Z'):
                    shifted_value -= 26
            else:
                if shifted_value > ord('z'):
                    shifted_value -= 26
            encrypted_string += chr(shifted_value)
        else:
            encrypted_string += char
    return encrypted_string