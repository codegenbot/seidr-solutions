def decode_cyclic(s: str):
    k = len(s) // 2
    return "".join(s[i] for i in range(0, len(s), k)

# Prompt the user for input
user_input = input("Enter a string: ")
result = decode_cyclic(user_input)
print(result)