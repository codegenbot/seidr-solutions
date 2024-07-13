def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 3 <= len(s):
            group = s[i : i + 3]
        else:
            group = s[i:]
        if len(group) == 3:
            result += group[1] + (group[0] if group[2] != group[0] else "")
        elif len(group) > 1:
            result += group[1] + (group[0] if i > 0 else "")
        i = i + 1
    return result