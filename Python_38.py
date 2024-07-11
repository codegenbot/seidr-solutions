Here is the completed code:

def decode_cyclic(s: str):
    result = []
    group = ''
    for char in s:
        group += char
        if len(group) == 3:
            if len(result) % 2 == 0:
                result.append(group)
            else:
                result.append(group[1:] + group[0])
            group = ''
    if group:
        if len(result) % 2 == 0:
            result.append(group)
        else:
            result.append(group[1:] + group[0])
    return "".join(result)