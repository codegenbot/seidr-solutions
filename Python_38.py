def decode_cyclic(s: str):
    result = []
    i = 0
    while i < len(s):
        group = s[i : i + 3]
        if len(group) == 2:
            result.append(group[1] + group[0])
        else:
            result.append(group)
        i += 3
    return "".join(result)