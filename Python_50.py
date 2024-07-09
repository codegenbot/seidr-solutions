def decode_shift(s: str):
    s = s.upper()
    return "".join([chr(((ord(ch) - 10 - ord("A")) % 26) + ord("A") if ch.isalpha() else ch for ch in s])