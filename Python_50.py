def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord('a')) % 26) + ord('a')) for ch in s])

# Test the function with input
input_str = "fghij"
print(decode_shift(input_str))