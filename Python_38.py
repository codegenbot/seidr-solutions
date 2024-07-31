def decode_cyclic(s: str):
    result = ""
    for group in s:
        if len(group) == 3:
            result += group[1] + (group[0] if group[0] != group[2] else "")
        else:
            result += group
    return result