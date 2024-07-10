def decode_cyclic(s: str):
    result = ""
    group = ""
    for char in s:
        group += char
        if len(group) == 3 or (len(group) >= 1 and (s.index(group[0]) < len(s) - 2)):
            if len(result) > 0 and result[-1] == group[0]:
                result += group[1]
            else:
                result += group
            group = ""
    if len(group) > 0:
        result += group
    return result