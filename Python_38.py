def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        temp += char
        if len(temp) >= 3:
            while len(temp) > 2:
                result.append(temp[1] + temp[0] + temp[2])
                temp = temp[1:]
            if temp:
                result.append(temp)
            temp = ""
    return "".join(result)