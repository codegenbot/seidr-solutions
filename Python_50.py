def decode_shift(s: str):
    s = s.lower()
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) if ch.isalpha() else ch for ch in s])

# Read input from user
input_str = input()

# Call the function with the input and print the result
print(decode_shift(input_str))