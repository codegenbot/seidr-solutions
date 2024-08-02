def encode_shift(s: str):
    return "".join(
        [
            chr(((ord(ch) - ord("a") + 5) % 26) + ord("a")) if ch.isalpha() else ch
            for ch in s
        ]
    )


def decode_shift(encoded_s: str):
    return encode_shift(encoded_s)