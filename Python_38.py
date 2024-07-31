def decode_cyclic(s: str):
    result = []
    i = 0
    while i < len(s):
        group = s[i : i + 3]
        if len(group) == 2:
            result.extend([group[0], group])
        else:
            result.append(group)
        i += 1
    return "".join(result)