def decode_shift(s: str):
    if not set(s).issubset('abcdefghijklmnopqrstuvwxyz'):
        return "Invalid Input"
    else:
        return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])