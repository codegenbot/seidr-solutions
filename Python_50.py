def encode_shift(s: str):
    return "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s])


def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])


# Read input from the user
input_string = input("Enter a string: ")

# Encode the input string
encoded_string = encode_shift(input_string)
print("Encoded string:", encoded_string)

# Decode the encoded string
decoded_string = decode_shift(encoded_string)
print("Decoded string:", decoded_string)