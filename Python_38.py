def decode_cyclic(s: str):
    result = ""
    temp = ""
    for char in s:
        temp += char
        if len(temp) % 3 == 0:
            result += temp[1] + temp[0]
            temp = ""
    if temp:
        result += temp[1] + temp[0]
    return result