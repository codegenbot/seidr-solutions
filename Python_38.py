def decode_cyclic(s: str):
    result = []
    group = ""
    for char in s:
        if len(group) < 3:
            group += char
        else:
            result.append(group[1] + group[0])
            group = char
    if group:
        result.append(group)
    return "".join(result)