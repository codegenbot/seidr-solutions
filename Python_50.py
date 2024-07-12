def decode_shift(s: str):
    return "".join([chr(((ord(ch) - ord("a") + 21) % 26) + ord("a")) for ch in s])


# Read input from user
input_str = input("Enter the encoded string to decode: ")

# Call the function with user input and output the decoded string
print(decode_shift(input_str))