def decode_shift(s: str):
    return "".join([chr((ord(ch) - 5 + (ord("a") if ch.islower() else ord("A"))) % 26 + (ord("a") if ch.islower() else ord("A"))) if ch.isalpha() else ch for ch in s])