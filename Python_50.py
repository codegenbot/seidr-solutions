def decode_shift(s):
    return "".join([chr((ord(ch) - 5 - ord("a")) % 26 + ord("a")) for ch in s])


# Get user input
message = input("Enter a message to decode: ")

# Call the function with the user input as an argument
decoded_message = decode_shift(message)

print(f"Decoded message: {decoded_message}")