```
def decode_cyclic(s: str):
    result = ""
    while len(s) >= 3:
        group = s[:3]
        if len(group) == 2:
            result += group[0] + "0"
        else:
            result += group[1] + group[0]
        s = s[3:]
    if s:
        result += s
    return result