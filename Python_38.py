def rearrange_groups(groups):
    groups = [group[-1] + group[:-1] if len(group) == 3 else group for group in groups]
    return "".join(groups)

# Read input from the user
groups = input().split()

# Call the function and print the result
print(rearrange_groups(groups))