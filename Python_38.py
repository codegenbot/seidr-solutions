def decode_cyclic(s: str):
    result = ""
    temp = ""
    for char in s:
        temp += char
        if len(temp) == 3:
            result += temp[1] + temp[0]
            temp = temp[2] if len(temp) > 2 else ""
    if temp:
        result += temp
    return result