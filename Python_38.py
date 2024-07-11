```
def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        temp += char
        if len(temp) >= 3:
            result.append(temp[1] + temp[0])
            temp = ""
    if temp:
        if len(temp) > 0 and len(temp) < 3:
            return "Error: Invalid cyclic shift sequence"
        else:
            result.append(temp)
    return "".join(result)