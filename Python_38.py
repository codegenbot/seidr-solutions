def decode_cyclic(s: str):
    result = ""
    for i in range(0, len(s), 3):
        if i + 3 > len(s):
            group = s[i:]
        else:
            group = s[i:i+3]
        if len(group) == 1:
            result += group[0] * (len(group) // 2 + 1)
        else:
            result += group[2] + group[:2]
    return result