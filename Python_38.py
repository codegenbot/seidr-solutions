# Function signature remains the same
def decode_cyclic(s: str):
    length = len(s)
    if length % 3 != 0:
        s += "#" * (3 - length % 3)

    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [
        (group[-1] + group[:-1]) if len(group) == 3 else group for group in groups
    ]
    return "".join(groups)


# Prompt user to enter input string
input_string = input("Enter the input string: ")
result = decode_cyclic(input_string)
print(result)