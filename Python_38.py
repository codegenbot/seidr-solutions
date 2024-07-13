def decode_cyclic(s: str):
    decoded = ""
    remainder = s[-1] if len(s) % 2 != 0 else ""
    prefix, *remainder_chars = s[: len(s) // 2] + (remainder,)
    while remainder_chars:
        for char in remainder_chars[0]:
            decoded += char
        remainder_chars.pop(0)
    return decoded