def encode_shift(s: str) -> str:
    if not s:
        return "Error: Input string is empty"
    return "".join(
        [
            chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a"))
            for ch in s
            if ch.isalpha() or ch.isspace()
        ]
    )


def decode_shift(s: str) -> str:
    if not s:
        return "Error: Input string is empty"
    return "".join(
        [
            chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a"))
            for ch in s
            if ch.isalpha() or ch.isspace()
        ]
    )


user_input = input().strip().lower()

encoded = encode_shift(user_input)
print(encoded)

decoded = decode_shift(encoded)
print(decoded)