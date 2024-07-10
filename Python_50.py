def decode_shift(s: str):
    return "".join(
        [
            (
                ch.upper()
                if "A" <= ch <= "Z"
                else chr(((ord(ch.lower()) - 5 - ord("a")) % 26) + ord("a")).upper()
            )
            for ch in s
        ]
    ).upper()