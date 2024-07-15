def decode_shift():
    s = input("Enter the string to decode: ")
    return "".join(
        [
            (
                chr(((ord(ch.lower()) - ord("a") - 5) % 26) + ord("a"))
                if ch.isalpha() and ch.islower()
                else ch
            )
            for ch in s
        ]
    )