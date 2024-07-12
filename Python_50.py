def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

# Get input from the user
input_str = input("Enter a string: ")

# Call the decode_shift function and print the result
print(decode_shift(input_str))