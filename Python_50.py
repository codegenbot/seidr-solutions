def decode_shift(encoded):
    return "".join(
        [chr(((ord(ch) - 97) % 26) + 97) if ch.isalpha() else ch for ch in encoded]
    )