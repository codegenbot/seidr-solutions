def decode_cyclic(s: str):
    result = []
    i = 0
    while i < len(s):
        if i >= len(s) - 2:  
            group = s[i:]
        else:
            group = s[i:i+3]
        if len(group) == 1:
            result.append(group[0])
        elif len(group) == 2:
            result.append(group[1] + group[0])
        else:
            result.append(group)
        i += 3
    return "".join(result)