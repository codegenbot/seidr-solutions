def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        temp += char
        if len(temp) >= 3:
            result.append(temp[1] + temp[0])
            temp = temp[1:] if len(temp) > 2 else ""
    if temp:
        if len(temp) == 1:
            return temp
        elif len(temp) == 2:
            result.extend([temp[1], temp[0]])
        else:
            result.append(temp)
    return "".join(result)