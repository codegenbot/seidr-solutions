def decode_cyclic(s: str):
    result = []
    while len(s) >= 3:
        group = s[:3]
        result.append(group[1:] + group[0])
        s = s[3:]
    if s:
        result.append(s)
    return "".join(result)