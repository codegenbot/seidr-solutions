groups = input("Enter the groups: ")
def rearrange_groups(groups):
    groups = [group[-1] + group[:-1] if len(group) == 3 else group for group in groups]
    return "".join(groups)

rearranged_string = rearrange_groups(groups)