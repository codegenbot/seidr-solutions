def decode_cyclic(groups):
    groups = [group[-1] + group[:-1] if len(group) == 3 else group for group in groups if isinstance(group, str) and len(group) == 3]
    return "".join(groups) if all(len(group) == 3 for group in groups) else None

# Read input from user
groups = input().strip().split()

# Call the function with the input
result = decode_cyclic(groups)
print(result)