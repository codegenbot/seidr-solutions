def decode_shift(s: str) -> str:
    if isinstance(s, str):
        return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])
    else:
        raise ValueError("Invalid input type")