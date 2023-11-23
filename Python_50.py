def encode_shift(s: str) -> str:
    return "".join([chr(((ord(ch) + 5 - ord("a")) % 26) + ord("a")) for ch in s])

def decode_shift(s: str) -> str:
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

# Read input from user
input_string = input("Enter a string: ")

# Call the functions with the input string and print the results
encoded_string = encode_shift(input_string)
decoded_string = decode_shift(input_string)

print("Encoded string:", encoded_string)
print("Decoded string:", decoded_string)