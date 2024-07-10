def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        temp += char
        if len(temp) == 3:
            result.append(temp[1] + temp[0] + temp[2])
            temp = ""
    if temp:
        result.append(temp[1] + temp[0] + temp[2] if len(temp) > 1 else temp)
    return "".join(result)