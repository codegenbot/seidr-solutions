def decode_cyclic(s: str):
    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [
        (group[-1] + group[:-1]) if len(group) == 3 else group for group in groups
    ]
    return "".join(groups)

# Taking input from the user
input_str = input("Enter a string: ")
while len(input_str) % 3 != 0:
    print("Please enter a string with a length multiple of 3.")
    input_str = input("Enter a string: ")

# Calling the function with user input
result = decode_cyclic(input_str)
print(result)