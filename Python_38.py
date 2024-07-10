def decode_cyclic(s: str):
    result = []
    group = ""
    for char in s:
        group += char
        if len(group) == 3:
            if len(result) > 0 and result[-1] == group[0]:
                result.append(group[2])
            else:
                result.append(group)
            group = ""
    if len(group) > 0:
        if len(result) > 0 and result[-1] == group[0]:
            result.append(group[2])
        else:
            result.append(group)
    return "".join(result)