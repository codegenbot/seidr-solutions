def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

# Receive input from the user
input_str = input("Enter the string to decode: ")

# Process the input using the decode_shift function
decoded_str = decode_shift(input_str)

# Return the decoded string
print(decoded_str)