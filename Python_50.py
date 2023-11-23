def encode_shift(s: str):
    return "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s])


def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])


# Read input from user
input_string = input("Enter a string: ").lower()

# Encode and decode the string
encoded_string = encode_shift(input_string)
decoded_string = decode_shift(encoded_string)

# Print the results
print("Encoded string: ", encoded_string)
print("Decoded string: ", decoded_string)