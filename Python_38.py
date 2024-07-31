def decode_cyclic(s: str):
    result = ""
    group = ""
    for char in s:
        group += char
        if len(group) == 3:
            if group[0] == group[2]:
                result += group[0] * 3
            else:
                result += group[1]
            group = ""
    if group:
        if len(group) == 1:
            result += group
        elif group[0] == group[2]:
            result += group[0] * 3
        else:
            result += group[1]
    return result