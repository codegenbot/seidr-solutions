def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord(' ')) % 26) + ord(' '))) for ch in s])