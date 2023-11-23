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


# Read input from user
user_input = input("Enter a string: ").strip()

# Call the encode_shift function
encoded = encode_shift(user_input)
print("Encoded string:", encoded)

# Call the decode_shift function
decoded = decode_shift(encoded)
print("Decoded string:", decoded)