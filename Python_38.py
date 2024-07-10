def decode_cyclic(s: str):
    result = ""
    while len(s) > 0:
        if len(s) >= 3:
            group = s[:3]
            result += group[1] + group[0]
            s = s[3:]
        else:
            result += s
            break
    return result