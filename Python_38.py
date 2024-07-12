def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        temp += char
        if len(temp) % 3 == 0 and temp != "":
            result.append(temp[-1] + temp[:-1])
            temp = ""
    if temp != "":
        result.append(temp)
    return "".join(result)