```
def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        if len(temp) == 2:
            result.append(str((int(temp[0]) - int(temp[1])) % 9))
            temp = ""
        else:
            temp += char
    if temp:
        result.append(temp)
    return "".join(result)