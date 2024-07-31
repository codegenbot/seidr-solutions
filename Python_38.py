def decode_cyclic(s: str):
    """ """
    result = []
    i = 0
    while i < len(s):
        if (i + 2) % 3 == 0:
            result.append(s[i - 1 : i + 3])
        else:
            group = s[i : i + 3]
            result.append(group[1:] + group[0])
        i += 3
    return "".join(result)