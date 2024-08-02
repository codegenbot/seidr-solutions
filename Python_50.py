def decode_shift(s: str):
    return "".join([chr((ord(ch) - ord("a") - 5) % 26 + ord("a")) if ch.islower() else ch for ch in s])