def decode_cyclic(s: str):
    result = ""
    temp_group = ""
    for char in s:
        temp_group += char
        if len(temp_group) == 3:
            if len(result) > 0 and len(temp_group) < 3:
                result += temp_group[1:]
            else:
                result += temp_group[0]
            temp_group = ""
    if len(temp_group) > 0:
        if len(temp_group) < 3:
            result += temp_group
        else:
            result += temp_group[0] + temp_group[2] + temp_group[1]
    return result