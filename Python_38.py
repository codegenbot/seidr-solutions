def decode_cyclic(s: str):
    result = ""
    while len(s) >= 2:
        if len(s) == 3:
            group = s[:3]
        else:
            group = s[:2]
        if group[0] == group[1]:
            result += group[0]
        else:
            if group[0] != group[1]:
                result += group[1]
            for i in range(1, len(group)):
                result += group[0]
        s = s[2:]
    return result