def decode_shift(s: str):
    s = s.lower()
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

# Read input from user
input_str = input("Enter the string to decode: ")
output_str = decode_shift(input_str)
print(output_str)