def decode_cyclic(s: str):
    if len(s) < 3:
        return s
    result = []
    temp = ""
    for char in s:
        if len(temp) < 3:
            temp += char
        else:
            result.append(temp[1:] + temp[0] + char)
            temp = char
    if temp:
        result.append(temp[1:] + temp[0])
    return "".join(result)