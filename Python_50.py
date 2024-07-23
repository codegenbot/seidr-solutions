```Python
def decode_shift(s: str):
    return "".join([chr(((ord(ch) - ord("a") + 26) % 26) + ord("a")) for ch in s])