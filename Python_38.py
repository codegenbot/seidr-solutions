def decode_cyclic(s: str):
    groups = [(group[-1] + group[:-1]) if len(group) == 3 else group for group in s]
    return "".join(groups)