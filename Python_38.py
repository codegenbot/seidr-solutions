def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        temp += char
        if len(temp) % 3 == 0:
            result.append("".join([temp[-1], temp[:-1]]))
            temp = ""
    return "".join(result)