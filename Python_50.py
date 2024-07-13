```Python
def decode_shift(s: str):
    return "".join([chr(((ord(ch) - ord("a")) % 26) + ord("a") - 5) or ch for ch in s])