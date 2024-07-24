def decode_cyclic(s: str):
    result = ""
    while len(s) >= 3:
        group = s[:3]
        if group[0] == "1":
            result += group[2:]
        else:
            result += group[1] + group[0]
        s = s[3:]
    return result