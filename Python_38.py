def decode_cyclic(s: str):
    result = []
    temp_group = ""
    for char in s:
        temp_group += char
        if len(temp_group) == 3:
            group_list = list(temp_group)
            group_list.insert(0, group_list[-1])
            result.append("".join(group_list))
            temp_group = ""
    if temp_group:
        result.append(temp_group)
    return "".join(result)