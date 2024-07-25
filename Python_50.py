def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a") if ch.isalpha() else ch for ch in s])

# Get input from user
input_string = input("Enter the string to decode: ")
# Call the function with input and print the result
print(decode_shift(input_string))