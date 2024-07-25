def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

# Input from user
input_str = input("Enter the string to decode: ")
# Call the decode_shift function with the input string
result = decode_shift(input_str)
# Output the decoded string
print(result)