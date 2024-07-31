def decode_cyclic(s: str):
    result = ""
    while len(s) > 0:
        group = s[:3]
        if len(group) == 3:
            result += group[1] + group[0]
        else:
            result += group
        s = s[3:]
    return result