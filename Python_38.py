def rearrange_groups(groups):
    groups = [group[-1] + group[:-1] if len(group) == 3 else group for group in groups]
    return "".join(groups)

# Get input from user
groups = input().split()

# Call the function with the input data
rearranged_string = rearrange_groups(groups)