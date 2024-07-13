def decode_cyclic(s: str):
    result = []
    for i in range(0, len(s), 3):
        group = s[i : i + 3]
        if len(group) == 1:
            result.append("0" + group[0] + "0")
        elif len(group) == 2:
            result.append(group[0] + "0" + group[1])
        else:
            result.append(group)
    return "".join(result)