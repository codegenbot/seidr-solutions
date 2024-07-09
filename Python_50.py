def decode_shift(s: str):
    return "".join([chr((ord(ch.lower()) - 97 + 5) % 26 + 97) if ch.isalpha() else ch for ch in s])