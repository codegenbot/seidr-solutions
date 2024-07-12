def decode_cyclic(s: str):
    result = []
    i = 0
    while i < len(s) - 2: 
        group = s[i:i+3]
        if len(group) == 2:
            result.append(group[1])
            i += 2
        else:
            result.extend([group[0], group[1]])
            i += 3
    return "".join(result)