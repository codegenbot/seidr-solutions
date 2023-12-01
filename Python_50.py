def encode_shift(s: str):
    return "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s])


def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])


# Read input from user
input_string = input()

# Call the encode_shift function with the input
encoded_string = encode_shift(input_string)

# Print the encoded string
print(encoded_string)

# Call the decode_shift function with the encoded string
decoded_string = decode_shift(encoded_string)

# Print the decoded string
print(decoded_string)