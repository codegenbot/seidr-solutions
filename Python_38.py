def decode_cyclic(s: str):
    groups = [s[i : i + 3] if i + 3 <= len(s) else s[i:] for i in range(0, len(s), 3)]
    groups = [
        (group[-1] + group[:-1]) if len(group) == 3 else group[0] for group in groups
    ]
    return "".join(groups)