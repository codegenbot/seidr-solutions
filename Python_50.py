def decode_shift(s: str):
    return "".join([chr((ord(ch.lower()) - 97) % 26 + 97) if 'a' <= ch.lower() <= 'z' else ch for ch in s])