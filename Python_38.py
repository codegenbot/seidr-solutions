def decode_cyclic(s: str):
    if len(s) % 3 != 0:
        return s
    result = ""
    temp = ""
    for char in s:
        temp += char
        if len(temp) % 3 == 0:
            if len(temp) > 1:
                result += temp[1] + temp[0]
            else:
                result += temp[0]
            temp = ""
    if temp:
        if len(temp) > 1:
            result += temp[1] + temp[0]
        else:
            result += temp[0]
    return result