def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        if len(temp) == 3:
            result.append(temp[1] + temp[0])
            temp = ""
        else:
            temp += char
    if len(temp) >= 2:
        result.append(temp[-2] + temp[-1])
    return "".join(result)