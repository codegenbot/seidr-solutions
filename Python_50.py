
def decode_shift(s):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

# Read user input
user_input = input("Enter a string to decode: ")

# Call the decode_shift() function with the user input as argument
decoded_string = decode_shift(user_input)

print(decoded_string)