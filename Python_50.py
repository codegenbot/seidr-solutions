def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a") if ord(ch) >= ord("a") else chr(((ord(ch) - 5 - ord("A")) % 26) + ord("A")) for ch in s])