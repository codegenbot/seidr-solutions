# Get user input as a string
input_string = input("Enter the string to decode: ")

# Define the decode_shift function to shift each character by -1
def decode_shift(input_string):
    return ''.join(chr(ord(char) - 1) for char in input_string)

# Decode the entered string and print the result
print(decode_shift(input_string))