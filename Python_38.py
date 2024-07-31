def decode_cyclic(s: str):
    result = []
    temp_group = ""
    for char in s:
        temp_group += char
        if len(temp_group) == 3:
            if len(result) > 0 and result[-1] == temp_group[1]:
                result[-1] = temp_group[0] + temp_group[1:]
            else:
                result.append(temp_group)
            temp_group = ""
    return "".join(result)