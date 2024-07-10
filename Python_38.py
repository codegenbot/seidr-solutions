def decode_cyclic(s: str):
    k = len(s) // 2
    return "".join(s[(i+k) % len(s)] for i in range(0, len(s), k) if len(s) > 1)

# Read input directly from the user
user_input = input()
# Call the function with user input
result = decode_cyclic(user_input)
print(result)