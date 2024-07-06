def decode_cyclic(s: str):
    """
    takes as input string encoded with encode_cyclic function. Returns decoded string.
    """
    result = []
    temp = ""
    for char in s:
        temp += char
        if len(temp) == 3:
            if len(result) > 0 and result[-1] != temp[0]:
                temp = temp[1:] + temp[0]
            result.append(temp)
            temp = ""
    if temp:
        if len(result) > 0 and result[-1] != temp[0]:
            temp = temp[1:] + temp[0]
        result.append(temp)
    return "".join(result)