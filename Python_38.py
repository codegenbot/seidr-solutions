def decode_cyclic(s: str):
    result = ""
    while len(s) >= 3:
        group = s[:3]
        s = s[3:]
        if len(group) == 3:
            result += group[1] + group[0] + group[2]
        else:
            result += group
    result += s
    return result