def decode_shift(s: str, k: int):
    return "".join([chr(((ord(ch.lower()) - ord("a")) + k) % 26 + ord("a")) for ch in s])