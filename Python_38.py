def decode_cyclic(groups):
    groups = [group[-1] + group[:-1] if len(group) == 3 else group for group in groups if len(group) == 3]
    return "".join(groups) if all(len(group) == 3 for group in groups) else None

print(decode_cyclic(input("Enter groups of exactly 3 characters separated by spaces: ").split()))