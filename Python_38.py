Here is the completed code:

def decode_cyclic(s: str):
    groups = []
    while len(s) >= 3:
        groups.append(s[:3])
        s = s[3:]
    if s:
        groups.append(s)
    result = []
    for group in groups:
        if len(group) == 3:
            result.extend([group[1], group[0]] + [group[2]])
        else:
            result.extend(list(group))
    return "".join(result)