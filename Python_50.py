def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

# Get user input
input_string = input("Enter the string to decode: ")
# Call the function with user input
decoded_string = decode_shift(input_string)
# Print the decoded string
print(decoded_string)