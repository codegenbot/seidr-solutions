def decode_cyclic(s: str):
    result = []
    for i in range(0, len(s), 2):
        if i < 2:
            result.append(s[i])
        group = s[i : i + 3]
        if len(group) == 3:
            group = list(group)
            group[0], group[-1] = group[-1], group[0]
            result.extend(group)
        else:
            result.extend(group)
    return "".join(result)