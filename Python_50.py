def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) if ord(ch) >= ord("f") else chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a") + 26) for ch in s])

# Get user input
input_string = input("Enter the string to decode: ").strip()

# Decode the entered string and print the result
print(decode_shift(input_string))