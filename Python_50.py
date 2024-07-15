def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

# Read input from user
s = input("Enter the encoded string: ")

# Call the decode_shift function with the input string and print the result
print(decode_shift(s))