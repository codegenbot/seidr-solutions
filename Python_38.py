def decode_cyclic(s: str):
    result = ""
    temp = ""
    for char in s:
        temp += char
        if len(temp) == 3:
            if len(result) % 3 == 0 and result:
                result += temp[1] + temp[0]
            else:
                result += temp
            temp = ""
    if temp:
        if len(result) % 3 == 0 and result:
            result += temp[1] + temp[0]
        else:
            result += temp
    return result