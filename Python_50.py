```Python
def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 97) % 26) + 97)) for ch in s])