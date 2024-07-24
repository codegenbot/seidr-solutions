def decode_cyclic(s: str):
    result = ""
    group = ""
    for char in s:
        group += char
        if len(group) == 3:
            if len(result) % 3 == 0:
                result += group[1:]
            else:
                result += group[2] + group[0]
            group = ""
    if group:
        if len(result) % 3 == 0:
            result += group[1:]
        else:
            result += group[2] + group[0]
    return result