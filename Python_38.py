def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        temp += char
        if len(temp) == 3:
            result.append(temp[2] + temp[0] + temp[1])
            temp = ""
    if temp:
        result.append(temp)
    return "".join(result)