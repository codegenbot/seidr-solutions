
def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("A" if ch.isupper() else "a")) for ch in s])