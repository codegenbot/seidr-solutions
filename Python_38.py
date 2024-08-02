def rearrange_groups(groups):
    groups = [group[-1] + group[:-1] if len(group) == 3 else group for group in groups]
    return "".join(groups)

input_groups = input().split()
result = rearrange_groups(input_groups)
print(result)