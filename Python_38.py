def decode_cyclic(s: str):
    result = ""
    for i in range(0, len(s), 3):
        group = s[i:i+3]
        if len(group) == 1:
            result += group[0] * 2
        elif len(group) == 2:
            result += group[1] + group[0]
        else:
            result += group[0] + group[1] + group[2]
    return result