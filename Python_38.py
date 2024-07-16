def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        if char != " " and len(temp) < 3:
            temp += char
        elif temp:
            if len(temp) == 3:
                result.append(" ".join([temp[1], temp[0]]))
            else:
                result.append(temp)
            temp = ""
    if temp:
        if len(temp) == 3:
            result.append(" ".join([temp[1], temp[0]]))
        else:
            result.append(temp)
    return " ".join(result)