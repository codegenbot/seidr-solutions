def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        if char == "x":
            if temp:
                result.append(temp)
            temp = ""
        else:
            temp += char
    if temp:
        result.append(temp)
    return "".join(result[::-1]).replace("x", "")