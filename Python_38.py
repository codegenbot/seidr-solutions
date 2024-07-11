```
def encode_cyclic(s: str):
    groups = []
    for i in range(0, (len(s) + 1) // 3):
        group = s[min((3 * i), len(s)) - 1 : min((3 * i + 3), len(s))]
        if len(group) == 3:
            groups.append((group[1:] + group[0]))
        else:
            groups.append(group)
    return "".join(groups)


def decode_cyclic(s: str):
    result = ""
    for i in range(0, (len(s) + 2) // 3):
        group = s[min((3 * i), len(s)) - 1 : min((3 * i + 3), len(s))]
        if i % 2 == 1:
            result += group[-1]
        else:
            result += group[:-1]
    return result