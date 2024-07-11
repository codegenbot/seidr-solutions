Here is the completed code:

def decode_cyclic(s: str):
    result = []
    group = ''
    for char in s:
        group += char
        if len(group) == 3:
            if len(result) > 0 and result[-1] != group[0]:
                group = group[1:] + group[0]
            result.append(group)
            group = ''
    if len(group) < 3:
        if len(result) > 0 and result[-1][0] == group[0]:
            group = group[1:] + group[0]
    result.append(group)
    return "".join(result)