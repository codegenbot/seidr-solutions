```
def decode_cyclic(s: str):
    result = []
    temp = ""
    if len(s) < 3:
        result.append(s)
    else:
        for char in s:
            if len(temp) == 3:
                result.append(temp[1] + temp[0])
                temp = ""
            else:
                temp += char
        if temp:
            if len(temp) >= 3:
                result.append(temp[2] + temp[:2])
            else:
                result.append(temp)
    return "".join(result)