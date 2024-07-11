def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        temp += char
        if len(temp) == 3:
            result.append(temp[1] + temp[0] + temp[2])
            temp = ""
    if len(temp) > 0:
        result.append(temp)
    return "".join(result)