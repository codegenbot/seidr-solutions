def decode_shift():
    while True:
        shift = int(input("Enter the shift value (1-25): "))
        encoded = input("Enter the encoded message: ")
        for i in range(26):
            decoded = "".join(
                [
                    (
                        chr(((ord(ch) - 97 + 26 - i) % 26) + 97)
                        if ch.isalpha() or not ch.isspace()
                        else ch
                    )
                    for ch in encoded
                ]
            )
            if "z" not in decoded and "Z" not in decoded:
                return decoded
        print("Invalid input. Please try again.")


decode_shift()