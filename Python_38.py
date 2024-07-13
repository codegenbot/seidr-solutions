def decode_cyclic(s: str):
    result = ""
    for i in range(len(s) // 3):
        group = s[(i * 3) : min((i + 1) * 3, len(s))]
        if len(group) == 2:
            result += group[0] + group[1]
        else:
            result += group
    return result