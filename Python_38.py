def decode_cyclic(s: str):
    result = ""
    temp = ""
    for char in s:
        temp += char
        if len(temp) >= 3:
            if len(result) == 0 or result[-1] != temp[0]:
                result += temp
            else:
                result += temp[-1]
            temp = ""
    if len(temp) > 0:
        if result and result[-1] != temp[0]:
            result += temp[:-1]
        elif temp:
            result += temp[-1]
        else:
            pass  
    return result