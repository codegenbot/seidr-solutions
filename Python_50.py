def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])


# Read input from the user
input_str = input("Enter the string to decode: ")

# Decode the input string using the decode_shift function
result = decode_shift(input_str)

# Print the decoded result
print(result)