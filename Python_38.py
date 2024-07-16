def decode_cyclic(s: str):
    result = ""
    group = ""
    for char in s:
        group += char
        if len(group) == 3:
            if len(result) > 0 and result[-1] == group[1]:
                result += group[2]
            else:
                result += group[0] + group[1] + group[2]
            group = ""
    return result