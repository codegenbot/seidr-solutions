def decode_shift(s: str):
    if not s:
        return ""  # or some other default value
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])