def decode_shift(s: str):
    return "".join([chr((ord(ch) - ord('e')) % 26 + ord('a')) for ch in s])