
def decode_shift(s: str, shift: int):
    return "".join([chr(((ord(ch) - shift - ord("a")) % 26) + ord("a") for ch in s])