def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        temp += char
        if len(temp) >= 3:
            if len(temp) > 3:
                temp = temp[1:] + temp[0]
            result.append(temp)
            temp = ""
    if temp:
        result.append(temp)
    return "".join(result)