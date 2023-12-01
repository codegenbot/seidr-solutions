def encode_shift(s: str):
    return "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s])


def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])


# Read input from user
input_str = input("Enter a string: ")

# Call the encode_shift function and print the result
encoded_str = encode_shift(input_str)
print("Encoded string:", encoded_str)

# Call the decode_shift function and print the result
decoded_str = decode_shift(encoded_str)
print("Decoded string:", decoded_str)