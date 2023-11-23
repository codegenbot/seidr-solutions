def encode_cyclic(s: str):
    groups = [s[(3 * i):min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return "".join(groups)


def decode_cyclic(s: str):
    groups = [s[(3 * i):min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [(group[-1] + group[:-1]) if len(group) == 3 else group for group in groups]
    return "".join(groups)

# Read input from user
input_string = input()
s, task = map(str, input_string.split())

# Call respective functions based on the task
if task == "E":
    result = encode_cyclic(s)
elif task == "D":
    result = decode_cyclic(s)
else:
    result = "Invalid task"

# Print the result
print(result)