def decode_cyclic(s: str):
    result = []
    group = ''
    for char in s:
        group += char
        if len(group) == 3:
            result.append(group[1] + group[0] + group[2])
            group = ''
    if group:
        result.append(group)
    return "".join(result)