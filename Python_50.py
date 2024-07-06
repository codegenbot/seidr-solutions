def decode_shift(input: str) -> str:
    n = int(input)
    s = "".join([chr((ord(ch) - 5 - ord("a")) % 26 + ord("a")) for ch in str(n)])
    return s