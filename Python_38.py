def decode_cyclic(s: str):
    result = ""
    temp_group = ""
    for char in s:
        temp_group += char
        if len(temp_group) == 3:
            if len(result) % 3 == 0 and result != "":
                result += temp_group[1] + temp_group[0]
            else:
                result += temp_group
            temp_group = ""
    if temp_group != "":
        if len(result) % 3 == 0 and result != "":
            result += temp_group[1] + temp_group[0]
        else:
            result += temp_group
    return result