def decode_cyclic(s: str):
    result = ""
    group = ""
    for char in s:
        group += char
        if len(group) == 3:
            group = list(group)
            result += "".join([group[1], group[0]] if len(group) > 2 else group)
            group = ""
    if group:
        result += "".join([group[1], group[0]] if len(group) > 2 else group)
    return result