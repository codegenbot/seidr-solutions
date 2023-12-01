def encode_shift(s: str):
    return "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s])


def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])


# Read input from user
input_str = input("Enter a string: ")

# Perform encoding
encoded_str = encode_shift(input_str)
print("Encoded string:", encoded_str)

# Perform decoding
decoded_str = decode_shift(encoded_str)
print("Decoded string:", decoded_str)