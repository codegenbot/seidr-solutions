def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

# Read input from the user
input_string = input("Enter a string to decode: ")

# Call the function with the input string and print the result
print(decode_shift(input_string))