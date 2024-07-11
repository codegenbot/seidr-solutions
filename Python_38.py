def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s + s:
        temp += char
        if len(temp) == 3:
            if len(result) > 0 and result[-1] == temp[0]:
                result.append(temp)
            elif temp[0] == temp[2]:  
                result.append(temp[1])
            else:
                result.append(temp)
            temp = ""
    return "".join(result)