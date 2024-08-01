def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("A")) % 26) + ord("A")) for ch in s])


# Read input from the user
input_string = input("Enter the string to decode: ")

# Call the function with the input string and print the result
print(decode_shift(input_string))