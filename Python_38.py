def decode_cyclic(s: str):
    k = len(s) // 2
    return "".join(s[i] for i in range(0, len(s), k))

# Get input from the user
user_input = input("Enter a string: ")
# Call the function with user input
result = decode_cyclic(user_input)
print(result)