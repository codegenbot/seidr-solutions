def decode_shift(s: str):
    return "".join([chr(((ord(ch.lower()) - 97 - (1 if ch.isalpha() else 0)) % 26) + 97) if ch.isalpha() else ch for ch in s])