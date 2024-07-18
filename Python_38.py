def rearrange_groups(groups):
    groups = [group[-1] + group[:-1] if len(group) == 3 else group for group in groups]
    return "".join(groups)

groups = input().split()  # Read input from user
rearranged_output = rearrange_groups(groups)
print(rearranged_output)