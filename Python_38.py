def decode_cyclic(s: str):
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    groups = [
        (group[2] + group[0] + group[1]) if len(group) == 3 else group
        for group in groups
    ]
    return "".join(groups)