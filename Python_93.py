def encrypt_and_decrypt(input_string):
    encrypted_message = ""
    for char in input_string:
        if char.isalpha():
            first_half = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ"
            second_half = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
            if char.lower() in "aeiouAEIOU":
                index = (ord(char.lower()) - 97) % 5
                encrypted_char = second_half[index]
                encrypted_message += (
                    encrypted_char.upper() if char.isupper() else encrypted_char
                )
            elif char.lower() in first_half:
                index = (ord(char.lower()) - 98) % 14
                encrypted_char = first_half[index]
                encrypted_message += (
                    encrypted_char.upper() if char.isupper() else encrypted_char
                )
            else:
                encrypted_message += char
        else:
            encrypted_message += char
    return encrypted_message