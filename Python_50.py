def decode_shift(s: str):
    return "".join([chr(((ord(ch.lower()) - 97 - ((ord(ch) - 65) % 26)) + 1) % 26 + 97).lower() if ch.isalpha() else ch for ch in s])