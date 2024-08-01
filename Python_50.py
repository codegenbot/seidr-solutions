def decode_shift(s: str, shift: int):
    return "".join([chr(((ord(ch) - ord("a") - shift) % 26) + ord("a")) for ch in s if ch.isalpha()])