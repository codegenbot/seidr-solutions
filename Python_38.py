def decode_cyclic(s: str):
    result = ""
    group = ""
    for char in s:
        group += char
        if len(group) == 3:
            if len(result) > 0 and (group[0] != result[-1]):
                group = group[1:] + group[0]
            result += group
            group = ""
    if len(group) > 0:
        if len(result) > 0 and (group[0] != result[-1]):
            group = group[1:] + group[0]
        result += group
    return result