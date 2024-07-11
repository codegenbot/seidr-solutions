def decode_cyclic(s: str):
    if len(s) % 3 != 0:
        return "Invalid input"
    result = []
    temp = ""
    for char in s:
        temp += char
        if len(temp) == 3:
            result.append(temp[1] + temp[0])
            temp = ""
    result.append(temp)
    return "".join(result)