def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 97 - (0 if ch.isalpha() else 1))) % 26 + 97)) if ch.isalpha() else ch for ch in s])