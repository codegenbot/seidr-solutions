def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

# Read input from user
input_str = input("Enter the encoded string: ")

# Decode the input string using the given function
decoded_str = decode_shift(input_str)

# Output the decoded string
print(decoded_str)