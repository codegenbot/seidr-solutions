def encode_shift(s: str):
    return "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s])

def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

# Read input from user
input_str = input()

# Call the functions with the input
encoded_str = encode_shift(input_str)
decoded_str = decode_shift(encoded_str)

# Print the results
print(encoded_str)
print(decoded_str)