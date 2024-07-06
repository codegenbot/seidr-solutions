def decode_cyclic(s):
    groups = []
    for i in range((len(s) + 2) // 3):
        group = s[(3 * i) : min((3 * i + 3), len(s))]
        if len(group) == 3:
            groups.append(group[1:] + group[0])
        else:
            groups.append(group)
    return "".join(groups)