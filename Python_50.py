def decode_shift(s: str):
    try:
        return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])
    except (ValueError, TypeError):
        raise ValueError("Invalid input type or value.")