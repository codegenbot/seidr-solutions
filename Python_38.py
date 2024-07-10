def decode_cyclic(s: str):
    result = ""
    while len(s) >= 3:
        group = s[:3]
        if len(group[0]) == 1 and len(group[1]) == 1 and len(group[2]) == 1:
            result += group[0] * 3
        else:
            for i in range(2):
                result += group[i + 1]
            result += group[0]
        s = s[3:]
    if s:
        result += s
    return result