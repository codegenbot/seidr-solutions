def decode_cyclic(s: str):
    result = []
    i = 0
    while i < len(s):
        group_len = min(3, len(s) - i)
        group = s[i : i + group_len]
        if i == len(s) - group_len:
            result.append(group[1:] + group[0])
        else:
            result.append(group[1:] + group[0])
        i += group_len
    return "".join(result)