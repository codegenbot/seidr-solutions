def encode_shift(s: str):
    return "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s])


def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])


input_str = input("Enter a string: ")  # Read input from the user
encoded_str = encode_shift(input_str)  # Encode the input string
decoded_str = decode_shift(encoded_str)  # Decode the encoded string

print("Encoded string:", encoded_str)  # Print the encoded string
print("Decoded string:", decoded_str)  # Print the decoded string