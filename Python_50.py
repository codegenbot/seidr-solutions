def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

# Read input from user
input_string = input("Enter the encoded string: ")

# Decode the input string
decoded_string = decode_shift(input_string)

# Print the decoded string
print(decoded_string)