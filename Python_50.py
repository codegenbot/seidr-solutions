def decode_shift(s: str):
    return "".join([chr((ord(ch) - 65 - 5) % 26 + 65) if ch.isupper() else chr((ord(ch) - 97 - 5) % 26 + 97) for ch in s])

# Read input from the user
input_string = input("Enter the string to decode: ")

# Call the decode_shift function with the input
result = decode_shift(input_string)

# Output the result
print(result)