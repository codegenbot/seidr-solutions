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
    return "".join([r[1] + r[0] + r[2] for r in [result[i][1:] + result[i][0] for i in range(len(result))]])