def decode_cyclic(s: str):
    if len(s) % 3 != 0:
        raise ValueError("The length of the string must be a multiple of 3")
    result = []
    i = 0
    while i < len(s) - 1:
        group = s[i:i+3]
        if len(group) == 2:
            result.append(group[1] + group[0])
        else:
            result.append(group)
        i += 3
    return "".join(result)