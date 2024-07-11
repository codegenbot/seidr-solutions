def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) if ch.isalpha() or ch.isspace() else ch for ch in s])

# Get user input
s = input("Enter the string to decode: ")

# Call the function and print the output
print(decode_shift(s))