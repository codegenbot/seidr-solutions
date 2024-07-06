def decode_shift(n: int) -> str:
    if n < 0 or n > 9:
        raise ValueError("Input must be a single-digit number")
    s = "".join([chr((ord(ch) - 5 - ord("a")) % 26 + ord("a")) for ch in str(n)])
    return s