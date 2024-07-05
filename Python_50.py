def decode_shift(s):
    return "".join([chr((ord(ch) - 5 - ord("a")) % 26 + ord("a")) for ch in s])


# Get user input
user_input = input("Enter text to decode: ")

# Decode the shifted text
decoded_text = decode_shift(user_input)

# Print decoded text
print("Decoded text:", decoded_text)