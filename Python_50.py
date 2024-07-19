def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

# Read input from the user
input_string = input("Enter the string to decode: ").lower()

# Call the decode_shift function with the input
result = decode_shift(input_string)

# Output the result
print(result)