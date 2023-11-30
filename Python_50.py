def encode_shift(s: str) -> str:
    if not s:
        return ""
    return "".join(
        [
            chr((ord(ch) + 5 - ord("A")) % 26 + ord("A")) if ch.isalpha() else ch
            for ch in s
        ]
    )


def decode_shift(s: str) -> str:
    if not s:
        return ""
    return "".join(
        [
            chr((ord(ch) - 5 - ord("A")) % 26 + ord("A")) if ch.isalpha() else ch
            for ch in s
        ]
    )