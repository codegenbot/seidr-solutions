Here is the completed code:

def decode_cyclic(s: str):
    result = []
    group = ""
    for char in s:
        group += char
        if len(group) == 3:
            if len(result) > 0 and len(result[-1]) == 3:
                result[-1] = result[-1][1:] + result[-1][0]
            result.append(group)
            group = ""
    if len(group) > 0:
        if len(result) > 0 and len(result[-1]) == 3:
            result[-1] = result[-1][1:] + result[-1][0]
        else:
            if len(result) > 0:
                result[-1] = result[-1][1:] + result[-1][0]
    return "".join(result)