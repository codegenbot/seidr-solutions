def decode_cyclic(s: str):
    result = []
    group = ""
    for char in s:
        if len(group) == 3:
            result.extend([group[0], group[1]])
            group = char
        else:
            group += char
    result.append(group)
    return "".join(result)