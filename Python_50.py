def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 97 - 5) % 26) + 97) for ch in s])