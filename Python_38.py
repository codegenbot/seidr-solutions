```
def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        if len(temp) == 3:
            result.append(temp[1] + temp[0])
            temp = ""
        else:
            temp += char
    if temp:
        result.append(temp)
    return "".join(result)