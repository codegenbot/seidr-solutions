def decode_cyclic(s: str):
    """ """
    result = ""
    group = ""
    for char in s:
        if len(group) == 3:
            result += group[1]
            group = char
        else:
            group += char
    result += group
    return result