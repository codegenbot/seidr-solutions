Here is the completed code:

def decode_cyclic(s: str):
    result = []
    temp = ''
    for char in s:
        if len(temp) < 3:
            temp += char
        else:
            if len(temp) == 3:
                result.append(temp[1] + temp[0])
            else:
                result.append(temp)
            temp = char
    if len(temp) == 3:
        result.append(temp[1] + temp[0])
    else:
        result.append(temp)
    return "".join(result)