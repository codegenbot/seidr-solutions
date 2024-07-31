def decode_cyclic(s: str):
    """
    takes as input string encoded with encode_cyclic function. Returns decoded string.
    """
    result = []
    temp = ""
    for char in s:
        if char == groups[0][0]:
            if len(temp) > 1:
                result.append(temp)
            temp = char
        else:
            temp += char
    if len(temp) > 1:
        result.append(temp)
    return "".join(result)