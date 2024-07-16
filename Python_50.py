def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

# Prompt user for input
input_str = input("Enter the string to decode: ")

# Call the decode_shift function with user input and print the result
print(decode_shift(input_str))