def decode_cyclic(s: str):
    result = ""
    temp = ""
    for char in s:
        if len(temp) == 3:
            result += temp[1] + temp[0]
            temp = char
        else:
            temp += char
    if temp:
        result += temp[1:] + temp[0]
    return result