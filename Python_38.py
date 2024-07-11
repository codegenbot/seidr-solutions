def decode_cyclic(s: str):
    result = []
    temp = ""
    if len(s) < 3:
        return s
    for char in s:
        if len(temp) == 3:
            result.append(temp[1] + temp[0])
            temp = ""
        else:
            temp += char
    if temp and len(temp) >= 3:
        result.append(temp[2] + temp[:2])
    elif temp:
        result.append(temp)
    return "".join(result)