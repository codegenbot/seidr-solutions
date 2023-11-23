def encode_shift(s: str) -> str:
    return "".join(
        [
            chr(((ord(ch.lower()) + 5 - ord("a")) % 26) + ord("a"))
            for ch in s
            if ch.isalpha() or ch.isspace()
        ]
    )


def decode_shift(s: str) -> str:
    return "".join(
        [
            chr(((ord(ch.lower()) - 5 - ord("a")) % 26) + ord("a"))
            for ch in s
            if ch.isalpha() or ch.isspace()
        ]
    )