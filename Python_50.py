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


user_input = input("Enter the string: ").strip()

encoded = encode_shift(user_input)
print("Encoded string:", encoded)

decoded = decode_shift(encoded)
print("Decoded string:", decoded)