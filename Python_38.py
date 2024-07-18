def decode_cyclic(groups):
    decoded_groups = [group[-1] + group[:-1] if len(group) == 3 else group for group in groups if isinstance(group, str) and len(group) == 3]
    return "".join(decoded_groups) if all(len(group) == 3 for group in decoded_groups) else None

groups = input("Enter groups separated by spaces: ").split()
print(decode_cyclic(groups))