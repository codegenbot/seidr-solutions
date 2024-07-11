def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        temp += char
        if len(temp) == 3:
            result.append(temp[1] + temp[0])
            temp = ""
    if temp:
        if len(temp) == 2:
            result.append(temp)
        else:
            result.append(temp[1] + temp[0])
    return "".join(result)