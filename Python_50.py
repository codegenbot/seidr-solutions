def decode_shift(s: str):
    return "".join([chr(((ord(ch) - ord("a") + 21) % 26) + ord("a")) if 'a' <= ch <= 'e' else ch for ch in s])