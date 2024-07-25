def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

# Read input from the user
input_string = input("Enter the encoded string: ")

# Decode the input and print the result
decoded_string = decode_shift(input_string)
print("Decoded string: ", decoded_string)