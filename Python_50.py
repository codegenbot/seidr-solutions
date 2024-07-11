def decode_shift(s: str):
    return "".join(
        [
            chr(((ord(ch) - ord("a")) % 26) + ord("a")) if ch.isalpha() else ch
            for ch in s
        ]
    )