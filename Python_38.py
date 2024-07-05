def decode_cyclic(s):
    n = len(s) // 3
    return "".join(s[i * n : (i + 1) * n] for i in range(3))


# Read input from user
input_string = input("Enter a string to decode: ")

# Call the function with the input string as argument
decoded_string = decode_cyclic(input_string)

print("Decoded string:", decoded_string)