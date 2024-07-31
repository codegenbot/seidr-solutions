def decode_cyclic(s: str):
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    groups = [
        (groups[i][1:] + groups[i][0]) if len(groups[i]) == 3 else groups[i]
        for i in range(len(groups))
    ]
    return "".join(group[1] if len(group) > 1 else group[0] for group in groups)