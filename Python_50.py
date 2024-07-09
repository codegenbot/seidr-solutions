```
def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 65) % 26) + ord('a')) for ch in s])