def decode_shift():
    while True:
        password = input("Enter the password: ")
        if not password.isalnum() or len(password) == 0:
            print("Invalid password, please try again.")
            continue
        encoded = input("Enter the encoded message: ")
        shift = (ord(password[0].upper()) - 65) % 26
        decoded = "".join(
            [
                (
                    chr(((ord(ch) - 97 + 26 - shift) % 26) + 97)
                    if ch.isalpha() or not ch.isspace()
                    else ch
                )
                for ch in encoded
            ]
        )
        return decoded

print(decode_shift())