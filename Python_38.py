def decode_cyclic(s: str):
    result = ""
    temp = ""
    for char in s:
        if len(temp) < 3:
            temp += char
        else:
            if len(temp) == 3:
                if temp[0] == temp[-1]:
                    result += temp[1]
                else:
                    result += temp
            temp = char
    if len(temp) == 3 and temp[0] == temp[-1]:
        result += temp[1]
    elif len(temp) < 3:
        result += temp
    else:
        if temp[0] == temp[-1]:
            result += temp[1]
        else:
            result += temp
    return result