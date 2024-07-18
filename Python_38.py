def decode_cyclic(groups):
    groups = [group[-1] + group[:-1] if len(group) == 3 else group for group in groups if isinstance(group, str) and len(group) == 3]
    return "".join(groups) if all(len(group) == 3 for group in groups) else None

input_list = input("Enter list of 3-character strings separated by spaces: ").split()
result = decode_cyclic(input_list)
print(result)