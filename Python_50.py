def decode_shift(n):
    s = "".join((ord(ch) - 5 - ord("a") + 1) % 26 + ord("a") for ch in str(n))
    return s