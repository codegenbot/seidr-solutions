def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

# Read input from user
input_str = input("Enter the string to decode: ")

# Check if input string contains only lowercase alphabet characters
if input_str.islower():
    # Call the decode_shift function with the input string
    decoded_str = decode_shift(input_str)
    
    # Print the decoded string
    print(decoded_str)
else:
    print("Input string should only contain lowercase alphabet characters.")