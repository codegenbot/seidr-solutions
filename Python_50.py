def decode_shift(n):
    s = "".join((chr((ord(ch) - 5 - ord("a")) % 26 + ord("a")) for ch in str(n)))
    return s