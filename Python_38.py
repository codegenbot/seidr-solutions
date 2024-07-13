def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 2 <= len(s) - 1:
            group = s[i : i + 2] + s[i]
        else:
            group = s[i:]
        if len(group) >= 3:
            for _ in range(len(group) // 3):
                result += group[1] + group[0] + group[2]
        else:
            result += group
        i += len(group)
    return result