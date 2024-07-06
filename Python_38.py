def decode_cyclic(s: str):
    if len(s) % 3 != 0:
        return "Error: Program did not receive expected input"
    result = []
    temp_group = ""
    for char in s:
        temp_group += char
        if len(temp_group) == 3:
            result.append(temp_group[1] + temp_group[0])
            temp_group = ""
    if temp_group:
        result.append(temp_group)
    return "".join(result)