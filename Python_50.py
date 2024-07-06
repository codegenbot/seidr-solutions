def decode_shift(s: str):
    return "".join([chr(((ord(ch) - ord("a") + 23) % 26) + ord("a")) for ch in s])