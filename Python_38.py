```
def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        temp += char
        if len(temp) > 3 and len(temp) % 3 == 0:
            while len(temp) > 1:
                result.append(temp[1] + temp[0])
                temp = temp[2:]
    if temp:
        result.append(temp)
    return "".join(result)