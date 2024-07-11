def decode_cyclic(s: str):
    result = ""
    while len(s) >= 3:
        group = s[:3]
        s = s[3:]
        if group[0] == group[2]:
            result += group[0]
        else:
            result += group
    if s:
        result += s
    return result