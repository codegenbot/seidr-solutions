```
def encode_cyclic(s: str):
    groups = []
    for i in range(0, len(s), 3):
        group = s[i : i + 3]
        if len(group) == 3:
            groups.append((group[1:] + group[0]))
        else:
            groups.append(group)
    return "".join(groups)


def decode_cyclic(s: str):
    groups = []
    for i in range(0, len(s), 3):
        group = s[i : i + 3]
        if len(group) > 3:
            groups.append(group[-1] + group[:-1])
        else:
            groups.append(group)
    return "".join(groups)