def encode_shift(s: str) -> str:
    return "".join(
        [chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s if ch.islower()]
    )


def decode_shift(s: str) -> str:
    return "".join(
        [chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s if ch.islower()]
    )


input_str = (
    "your_input_string"  # Replace "your_input_string" with the desired input string
)
encoded_str = encode_shift(input_str)
decoded_str = decode_shift(encoded_str)

print(encoded_str)
print(decoded_str)