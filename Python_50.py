def encode_shift(s: str) -> str:
    return "".join([chr(((ord(ch.lower()) + 5 - ord("a")) % 26) + ord("a")) for ch in s])


def decode_shift(s: str) -> str:
    return "".join([chr(((ord(ch.lower()) - 5 - ord("a")) % 26) + ord("a")) for ch in s])


input_str = input("Enter input: ").strip()
encoded_str = encode_shift(input_str)
decoded_str = decode_shift(encoded_str)

print("Encoded String:", encoded_str)
print("Decoded String:", decoded_str)