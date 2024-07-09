def decode_shift(s: str):
    return "".join(
        [
            (
                chr(((ord(ch) - 65 - ord("a")) % 26) + ord("A"))
                if ch.isalpha() and ch.isupper()
                else (
                    chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a"))
                    if ch.isalpha() and ch.islower()
                    else " " if ch.isspace() else ch
                )
            )
            for ch in s
        ]
    )