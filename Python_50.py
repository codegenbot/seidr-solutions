def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

# Read input from user
input_string = input()

# Call the function with input
result = decode_shift(input_string)

# Print the result
print(result)