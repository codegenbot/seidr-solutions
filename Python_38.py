def decode_cyclic(s: str):
    return "".join(
        [(group[-1] + group[:-1]) if len(group) == 3 else group for group in s.split('-')]
    )

# Read input from the user
input_str = input("Enter the string to decode: ")

# Call the function with user input
result = decode_cyclic(input_str)

# Output the result
print(result)