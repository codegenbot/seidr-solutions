```
def decode_shift():
    while True:
        password = input("Enter the password (single uppercase letter): ")
        if len(password) == 1 and password.isalpha() and password.upper() == password:
            encoded = input("Enter the encoded message: ")
            if encoded.lower() == "none":
                break
            shift = (ord(password[0].upper()) - 65) % 26
            decoded = "".join([chr(((ord(ch) - 97 + 26 - shift) % 26) + 97) if ch.isalpha() or not ch.isspace() else ch for ch in encoded])
            return decoded
        else:
            print("Invalid input. Please enter a single uppercase letter as the password.")
result = decode_shift()
print(result)