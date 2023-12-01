def shift_string(s: str, shift: int) -> str:
    return "".join([chr(((ord(ch) + shift - ord("a")) % 26) + ord("a")) for ch in s])