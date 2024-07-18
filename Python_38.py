def decode_cyclic(groups):
    groups = [group[-1] + group[:-1] if len(group) == 3 else group for group in [groups[i:i+3] for i in range(0, len(groups), 3)]]
    return "".join(groups)