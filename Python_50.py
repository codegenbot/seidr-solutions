def encode_shift(s: str) -> str:
    return "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s])


def decode_shift(s: str) -> str:
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])


input_str = "test input"  # Replace with your input string
encoded_str = encode_shift(input_str)
decoded_str = decode_shift(encoded_str)

print("Encoded string:", encoded_str)
print("Decoded string:", decoded_str)