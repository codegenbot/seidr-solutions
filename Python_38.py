def decode_cyclic(s: str):
    k = len(s) // 2
    return "".join(s[(i+k) % len(s)] for i in range(len(s)) if len(s) > 1)

# Prompt the user to enter input
user_input = input("Enter a string: ")
# Call the function with user input
result = decode_cyclic(user_input)
print(result)