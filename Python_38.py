Here is the completed code:

def decode_cyclic(s: str):
    result = []
    while s:
        group = s[:3]
        if len(group) == 2:
            result.append(group)
            break
        result.append(group[1] + group[0])
        s = s[3:]
    return "".join(result)