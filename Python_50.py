def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

# Read input from user and verify if it contains only lowercase letters
input_str = input("Enter the string to decode (lowercase only): ")
if not input_str.islower():
    print("Input should contain lowercase letters only.")
    exit()

# Call the decode_shift function with the input string
decoded_str = decode_shift(input_str)

# Print the decoded string
print(decoded_str)