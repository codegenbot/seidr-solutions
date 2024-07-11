Here is the modified code:

def decode_cyclic(s: str):
    result = ""
    group = ""
    for char in s:
        group += char
        if len(group) == 3:
            if len(result) > 0 and len(group) < 3:
                result += group[2]
            else:
                result += group[1] + group[0]
            group = ""
    if len(group) > 0:
        if len(result) > 0 and len(group) < 3:
            result += group[2]
        else:
            result += group[1] + group[0]
    return result