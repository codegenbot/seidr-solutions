```
def decode_cyclic(s: str):
    result = ""
    group = ""
    for char in s:
        group += char
        if len(group) == 3:
            if len(result) % 3 != 0:
                result += group[1] + (group[0] if group[0] != group[2] else '')
            else:
                result += group
            group = ""
    if group:
        if len(result) % 3 != 0:
            result += group[1] + (group[0] if group[0] != group[2] else '')
        else:
            result += group
    return result