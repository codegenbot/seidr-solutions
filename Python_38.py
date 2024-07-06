```
def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        temp += char
        if len(temp) == 3:
            if len(result) > 0 and result[-1] == temp[1]:
                temp = temp[2:] + temp[:2]
            result.append(temp)
            temp = ""
    if temp:
        result.append(temp + (temp[:len(temp)//3]*2))
    return "".join(result)