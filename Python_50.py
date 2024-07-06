def decode_shift(s: str):
    return "".join([chr((ord(ch) - 5 - ord("a")) % 26 + ord("a")) for ch in s])


# Read user input
input_string = input()

# Call the decode_shift function with the user input
decoded_string = decode_shift(input_string)

print(decoded_string)