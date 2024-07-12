def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

# Prompt user for input
input_string = input("Enter a string to decode: ")

# Call decode_shift function with user input
result = decode_shift(input_string)

# Print the decoded string
print(result)