def decode_cyclic(groups):
    groups = [group[-1] + group[:-1] if len(group) == 3 else group for group in groups]
    return "".join(groups)

# Read input from the user
groups = input().split()

# Call the function with user input
result = decode_cyclic(groups)
print(result)