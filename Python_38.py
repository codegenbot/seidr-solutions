def decode_cyclic(s: str):
    result = ""
    temp = ""
    for char in s:
        if len(temp) < 2:
            temp += char
        else:
            if len(result) > 0 and result[-1] == temp[0]:
                result += temp[1]
            else:
                result += temp[:-1]
            temp = temp[-1]
    if len(temp) > 0:
        if len(result) > 0 and result[-1] == temp:
            return result
        else:
            if len(temp) > 1:
                result += temp[1]
            else:
                result += temp
    return result