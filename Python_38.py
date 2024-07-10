def decode_cyclic(s: str):
    result = ""
    while len(s) > 0:
        s = s[1:] + s[0]
        group = s[:3]
        if len(group) == 3:
            result += group
            s = s[3:]
        else:
            result += group + (s[: len(group) - 1] or "")
            break
    return result