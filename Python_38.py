def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        if len(temp) >= 2 and len(temp) % 3 == 0:
            if len(temp) == 3:
                result.append(char)
            else:
                result.extend([char, temp[1], temp[0]])
            temp = ""
        else:
            temp += char
    if temp:
        while len(temp) > 2 and len(temp) % 3 != 0:
            result.append(temp[-1])
            temp = temp[:-1]
        if temp:
            result.extend([temp[-2], temp[-1]])
            temp = temp[:-2]
        for i in range(0, len(temp), 3):
            result.extend([temp[i + 2], temp[i + 1], temp[i]])
    return "".join(result)