def decode_cyclic(groups):
    groups = [group[-1] + group[:-1] if len(group) == 3 else group for group in groups if isinstance(group, str) and len(group) == 3]
    return "".join(groups) if all(len(group) == 3 for group in groups) else None

user_input = input("Enter groups separated by spaces: ")
groups = user_input.split()
print(decode_cyclic(groups))