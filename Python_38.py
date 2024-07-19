def encode_cyclic(s: str):
    if len(s) <= 2:
        return s
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    groups = [
        (
            (group[1:] + group[0])
            if len(group) == 3
            else group[0] + group[1:-1] + group[-1]
        )
        for group in groups
    ]
    return "".join(groups)


def decode_cyclic(s: str):
    if len(s) <= 2:
        return s
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    groups = [
        group[-1] + group[:-1] if len(group) > 2 else group[0] + group[1:-1] + group[-1]
        for group in groups
    ]
    return "".join(groups)