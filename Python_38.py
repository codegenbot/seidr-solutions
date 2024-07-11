```
def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s + '0': 
        temp += char
        if len(temp) == 3:
            result.append(temp[1] + temp[0])
            temp = ""
    if temp:
        result.append(temp)
    return "".join(result)