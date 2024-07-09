def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

# Read input from user
user_input = input("Enter a string: ")

# Call the decode_shift function with user input
result = decode_shift(user_input)
print(result)