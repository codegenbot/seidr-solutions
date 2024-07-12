def decode_cyclic(s: str):
    result = []
    i = 0
    while i < len(s):
        group = s[i : i + 3]
        if i + 2 < len(s):
            group = s[i : i + 3]
        elif i + 1 < len(s):
            group = s[i:]
            result.extend([group[0], group[1]])
            break
        if len(group) == 2:
            result.append(group[1])
            i += 2
        else:
            result.extend([group[0], group[1]])
            i += 3
    return "".join(result)