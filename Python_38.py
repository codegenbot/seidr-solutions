Here is the completed code:

def decode_cyclic(s: str):
    result = []
    group = ''
    for char in s:
        group += char
        if len(group) == 3:
            if len(result) > 0 and result[-1] == group[0]:
                result.append(group[2])
            else:
                result.extend([group[0], group[2]])
            group = ''
    if group != '':
        if len(result) > 0 and result[-1] == group[0]:
            result.append(group[2])
        else:
            result.extend([group[0], group[2]])
    return "".join(result)