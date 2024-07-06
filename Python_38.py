def decode_cyclic(s: str):
    result = ""
    group = ""
    for char in s:
        group += char
        if len(group) == 3:
            group = group[1:] + group[0]
            result += group
            group = ""
    result += group
    return result