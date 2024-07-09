def decode_cyclic(s: str):
    groups = [s[(3 * i):min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [(group[-1] + group[:2]) if len(group) == 3 else group for group in groups]
    return "".join(groups)

# Get input from user
input_str = input()
# Call the function with input and print the result
print(decode_cyclic(input_str))