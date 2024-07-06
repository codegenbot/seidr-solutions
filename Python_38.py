```
def decode_cyclic(s: str):
    result = ""
    group_index = 0
    while s:
        if len(s) >= 3:
            group = s[:3]
            s = s[3:]
        else:
            group = s
            s = ""
        if group_index > 0:
            result += group[-1] + group[:-1]
        else:
            result += group
        group_index = (group_index + 1) % 2
    return result