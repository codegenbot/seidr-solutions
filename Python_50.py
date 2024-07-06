```
def encode_shift(s: str):
    return "".join([chr(((ord(ch) - ord("a")) % 26 - 3) + ord("a")) for ch in s])