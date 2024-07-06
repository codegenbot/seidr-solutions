
def decode_cyclic(s):
    groups = []
    for i in range(len(s) // 3):
        group = s[i * 3:(i + 1) * 3]
        if len(group) == 3:
            group = (group[1:] + group[0])
        groups.append(group)
    return "".join(groups)