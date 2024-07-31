def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        temp += char
        if len(temp) % 3 == 0:
            result.append("".join([temp[-1], temp[0:-1]]))
            temp = ""
    if temp:
        result.append("".join([temp[-1], temp[0:-1]]))
    return "".join(result)