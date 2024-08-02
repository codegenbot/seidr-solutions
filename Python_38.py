def rearrange_groups(groups):
    groups = [group[-1] + group[:-1] if len(group) == 3 else group for group in groups]
    return "".join(groups)


groups = input("Enter the groups separated by spaces: ").split()
rearranged_string = rearrange_groups(groups)