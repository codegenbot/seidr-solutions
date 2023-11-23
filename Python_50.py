def encode_shift(s: str):
    return "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s])


def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])


# Read input from user
input_string = input()

# Call the encode_shift function and print the output
encoded_string = encode_shift(input_string)
print(encoded_string)

# Call the decode_shift function and print the output
decoded_string = decode_shift(encoded_string)
print(decoded_string)