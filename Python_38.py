def decode_cyclic(s: str):
    if len(s) <= 1:
        return "Input string should have length greater than 1"
    
    k = len(s) // 2
    return "".join(s[(i+k) % len(s)] for i in range(len(s))

# Read input directly from the user
user_input = input()
# Call the function with user input
result = decode_cyclic(user_input)
print(result)