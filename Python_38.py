def decode_cyclic(s: str):
    result = ""
    group = ""
    for char in s:
        group += char
        if len(group) == 3:
            if group[0] == group[2]:
                result += group[1]
            else:
                result += group[0] + group[1] + group[2]
            group = ""
    return result