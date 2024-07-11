def decode_shift(s: str):
    if not s:
        return ""
    return "".join([chr((ord(ch) - ord(c)) % 26 + ord("a")) if c.isalpha() else ch for c in s])