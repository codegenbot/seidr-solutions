def decode_shift(n: int):
    s = str(n)
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])