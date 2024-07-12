def decode_shift():
    n = int(input("Enter the shift number: "))
    s = input("Enter the encoded string: ")
    return "".join(
        [
            chr(((ord(ch) - ord("a") + n) % 26) + ord("a")) if ch.isalpha() else ch
            for ch in s.lower()
        ]
    )