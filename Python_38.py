```
def decode_cyclic(s: str):
    result = []
    temp = ""
    if len(s) < 3:
        if s:
            result.append(s)
        return "".join(result)

    for char in s:
        temp += char
        if len(temp) == 3:
            if len(result) > 0 and result[-1] == temp[1]:
                temp = temp[2:] + temp[:2]
            result.append(temp)
            temp = ""
    if len(s) % 3 != 0:  
        result.append(temp + (temp[:len(s)-len(temp)]*2))
    return "".join(result)