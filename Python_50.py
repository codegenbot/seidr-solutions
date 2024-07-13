def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 65 if ch.isupper() else ord(ch) - 97) % 26) + 65 if ch.isupper() else 97) if ch.isalpha() else ch for ch in s])