def decode_shift(s: str):
    return "".join(
        [
            (
                chr(((ord(ch) - 5 - ord("A")) % 26) + ord("A"))
                if ch.isupper()
                else chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a"))
            )
            for ch in s
        ]
    )