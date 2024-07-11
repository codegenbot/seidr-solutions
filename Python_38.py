def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        if len(temp) >= 3 and (len(temp) % 3 == 0 or len(temp) == 1):
            result.append(temp[1:] + temp[0])
            temp = ""
        else:
            temp += char
    if temp:
        result.append(temp)
    return "".join(result)