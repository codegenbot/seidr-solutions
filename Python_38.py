def decode_cyclic(s: str):
    result = ""
    group = ""
    for char in s:
        group += char
        if len(group) == 3:
            if len(result) % 3 == 0 and result:
                result += group[2] + group[1] + group[0]
            else:
                result += group[1:] + group[0]
            group = ""
    return result