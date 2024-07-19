def decode_cyclic(s: str):
    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [
        (group[-1] + group[:-1]) if len(group) == 3 else group for group in groups
    ]
    return "".join(groups)

# Read input from user
input_string = input("Enter the input string (length must be a multiple of 3): ")
while len(input_string) % 3 != 0:
    print("Input length must be a multiple of 3. Please try again.")
    input_string = input("Enter the input string (length must be a multiple of 3): ")
result = decode_cyclic(input_string)
print(result)