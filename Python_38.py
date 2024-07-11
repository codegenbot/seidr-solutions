def encode_cyclic(s: str):
    groups = []
    for i in range(0, (len(s) + 2) // 3):
        group = s[(3 * i) : min((3 * i + 3), len(s))]
        if len(group) == 3:
            groups.append((group[1:] + group[0]))
        else:
            groups.append(group)
    return "".join(groups)


def decode_cyclic(s: str):
    result = ""
    for i, group in enumerate([s[i : i + 3] for i in range(0, len(s), 3)]):
        if i % 2 == 1:
            result += group[-1]
        else:
            result += group[:-1]
    return result