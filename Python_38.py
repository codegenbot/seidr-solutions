def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        if char == "\n":
            continue
        temp += char
        if len(temp) == 3:
            result.append(temp[1] + temp[0])
            temp = ""
    if temp:
        result.append(temp)
    return "".join(result)