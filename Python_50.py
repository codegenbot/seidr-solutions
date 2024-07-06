
def decode_shift(s: str, n: int):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % (26 + n)) + ord("a")) for ch in s])