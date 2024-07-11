def decode_shift():
    s = input("Enter the string: ")
    return "".join(
        [chr((ord(ch) - ord(c)) % 26 + ord("a")) if c.isalpha() else ch for c in s]
    )