def decode_cyclic(s: str):
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    groups = [(groups[0] + group) if len(group) == 2 else group for group in groups]
    return "".join(groups)