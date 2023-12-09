def decode_shift(s: str) -> str:
    return "".join([chr((ord(ch) - 5) % 26 + ord("a")) for ch in s])