def decode_cyclic(s: str):
    result = ""
    while s:
        if len(s) >= 3:
            group = s[:3]
            result += group[1] + (group[0] if len(group) > 2 else "")
            s = s[3:]
        else:
            result += s[0]
            s = s[1:]
    return result