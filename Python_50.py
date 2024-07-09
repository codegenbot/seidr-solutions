def decode_shift(s: str):
    return "".join([chr((ord(ch.lower()) - 97 + 5) % 26 + 97) if ch.isalpha() else chr((ord(ch.upper()) - 65 + 5) % 26 + 65) for ch in s])