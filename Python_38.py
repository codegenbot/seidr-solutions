def decode_cyclic(groups):
    groups = [group[-1] + group[:-1] if len(group) == 3 else group for group in groups]
    return "".join(groups)

input_groups = input("Enter the list of groups separated by spaces: ").split()
result = decode_cyclic(input_groups)
print(result)