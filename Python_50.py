def decode_shift(s: str):
    return "".join([chr(((ord(ch.lower()) - ord("a")) % 26 + 3) + ord("a")) if ch.isalpha() else ch for ch in s])