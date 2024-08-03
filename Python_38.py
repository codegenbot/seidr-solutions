```
def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        temp += char
        if len(temp) % 3 == 0:
            result.append(temp[1:] + temp[0])
            temp = ""
    if temp:
        result.append(temp)
    return "".join([i[-1] + i[:-1] for i in [result[i:i+2] for i in range(0,len(result),2)]])