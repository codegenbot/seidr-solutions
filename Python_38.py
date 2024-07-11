```
def decode_cyclic(s: str):
    result = ''
    while len(s) >= 3:
        group = s[:3]
        if len(group) > 1 and group[0] == group[-1]:
            result += group[1]
        else:
            result += group[0] + group[-1]
        s = s[3:]
    if s:
        result += s
    return result