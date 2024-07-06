```
def encode_cyclic(s: str):
    groups = []
    i = 0
    while i < len(s):
        group = s[i : i + 3]
        if len(group) == 1:
            groups.append(group)
        elif len(group) > 1:
            groups.append(group[1:] + group[0])
        i += 3
    return "".join(groups)

def decode_cyclic(s: str):
    groups = []
    i = 0
    while i < len(s):
        group = s[i : i + 3]
        if len(group) == 1:
            groups.append(group)
        elif len(group) > 1:
            groups.append(group[-1] + group[:-1])
        i += 3
    return "".join(groups)