def decode_shift(s: str):
    return "".join(
        [
            (
                chr(((ord(ch.lower()) - ord('a')) % 26) + ord('a'))
                if ord('a') <= ord(ch.lower()) - ord('a') < 26
                else ch
            )
            for ch in s
        ]
    ).upper()