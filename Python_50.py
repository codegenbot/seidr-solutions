def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

# Read input from user
input_str = input("Enter a string to decode: ")

# Call the function with the input
result = decode_shift(input_str)

# Print the decoded string
print(result)