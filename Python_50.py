def decode_shift(s: str):
    return "".join([chr((ord(ch) - 3 - ord("a")) % 26 + ord("a")) for ch in s])

# Prompt the user to enter input
input_str = input("Enter the string to decode: ")

# Call the function with user input
result = decode_shift(input_str)

# Print the result
print(result)