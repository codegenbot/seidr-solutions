def decode_shift():
    while True:
        try:
            s = input("Enter a shifted string: ")
            d = int(input("Enter the shift value: "))
            if not s or not d:
                print("Please enter both string and shift value.")
                continue
            return "".join(
                [
                    (
                        chr(((ord(ch) - 97 - d) % 26) + 97)
                        if ch.isalpha() and ch.islower()
                        else (
                            chr(((ord(ch) - 65 - d) % 26) + 65)
                            if ch.isalpha() and ch.isupper()
                            else ch
                        )
                    )
                    for ch in s
                ]
            )
        except ValueError:
            print("Please enter a valid shift value.")