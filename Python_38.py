def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        temp += char
        if len(temp) == 3:
            if len(result) > 0 and result[-1] == temp[1]:
                temp = temp[2:] + temp[:2]
            else:
                result.append(temp)
            temp = ""
    if len(temp) > 0:
        result.append(temp)
    return "".join(result)