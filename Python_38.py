def decode_cyclic(groups):
    groups = [group[-1] + group[:-1] if len(group) == 3 else group for group in groups]
    return "".join(groups) if all(len(group) == 3 for group in groups) else None

# Read input from user
groups = input().split()

# Call the function with the input and print the result
print(decode_cyclic(groups))