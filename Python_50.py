def decode_shift(s: str):
    return "".join(
        [
            (
                chr(((ord(ch.lower()) - 97 - ord("a")) % 26) + ord("a"))
                if "a" <= ch.lower() <= "z"
                else ch
            )
            for ch in s
        ]
    ).upper()