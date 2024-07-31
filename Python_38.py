def decode_cyclic(s: str):
    result = []
    group = ""
    for char in s:
        group += char
        if len(group) == 3:
            if len(result) > 0 and result[-1] != "":
                result.append("".join([result.pop(), group[0]]))
            else:
                result.append(group)
            group = ""
    if group != "":
        if len(result) > 0 and result[-1] != "":
            result.append("".join([result.pop(), group[0]]))
        else:
            result.append(group)
    return "".join(result).replace(" ", "")