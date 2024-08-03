def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        temp += char
        if len(temp) >= 3:
            while len(temp) > 2:
                temp = temp[1:] + temp[0] + temp[-1]
            result.append(temp)
            temp = ""
    if temp:
        result.append(temp)
    return "".join(result)