Here is the completed code:

def decode_cyclic(s: str):
    """
    returns decoded string from cyclically encoded string.
    """
    result = []
    group = ''
    for char in s:
        group += char
        if len(group) == 3:
            if len(result) % 3 == 0:
                result.append(group)
            else:
                group = group[1:] + group[0]
    if group:
        if len(result) % 3 == 0:
            result.append(group[:2] + group[-1])
        else:
            result.append(group[1:] + group[0])
    return "".join(result)