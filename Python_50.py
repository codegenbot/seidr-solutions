def decode_shift(s: str):
    return "".join([chr(((ord(ch) - ord("a") + 5) % 26) + ord("a")) for ch in s])