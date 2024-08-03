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
    return "".join([i[1] + i[0] if len(i) > 1 else i for i in result]).replace(" ", "")