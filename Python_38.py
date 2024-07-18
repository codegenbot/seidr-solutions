def decode_cyclic(groups):
    # Shift each group cyclically by one
    groups = [group[-1] + group[:-1] if len(group) == 3 else group for group in groups]
    # Join the groups to form the decoded string
    return "".join(groups)