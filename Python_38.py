def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        temp += char
        if len(temp) == 3:
            result.append(temp)
            temp = ""
    if temp:
        result.append(temp)
    return "".join([c[1:] + c[0] if len(c) > 1 else c for c in result])