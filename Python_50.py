def decode_shift(n):
    s = input("Enter a string to decode: ")
    decoded = "".join([chr((ord(ch) - 5 - ord("a")) % 26 + ord("a")) for ch in str(s)])
    return decoded