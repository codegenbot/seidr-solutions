def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s * 2:  
        temp += char
        if len(temp) == 3:
            if temp[0] in temp[1:]:
                result.append(temp)
            else:
                result.append(temp[-1] + temp[:-1])
            temp = ""
    return "".join(result)