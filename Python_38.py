def decode_cyclic(s: str):
    if not s:
        return ""
    result = []
    temp = ""
    for char in s:
        temp += char
        if len(temp) % 3 == 0:
            result.append(temp[1:] + temp[0])
            temp = ""
    if temp:
        result.append(temp)
    return "".join(result)