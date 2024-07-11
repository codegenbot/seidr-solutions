def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        if len(temp) == 3:
            if len(s) != 2 * len(temp):
                result.append(temp[1] + temp[0])
            else:
                result.append(temp[0] + temp[1])
            temp = ""
        else:
            temp += char
    if temp:
        if len(s) != 2 * len(temp):
            result.append(temp[1] + temp[0])
        else:
            result.append(temp[0] + temp[1])
    return "".join(result)