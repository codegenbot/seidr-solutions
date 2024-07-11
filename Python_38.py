def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        temp += char
        if (len(s) - 1) % 3 == ((len(temp) - 1) % 3):
            if len(result) > 0 and result[-1] == temp[0]:
                result.append(temp)
            else:
                result.append(temp[1:] + temp[0])
            temp = ""
    if len(temp) > 0:
        if len(result) > 0 and result[-1] == temp[0]:
            result.append(temp)
        else:
            result.append(temp[1:] + temp[0])
    return "".join(result)