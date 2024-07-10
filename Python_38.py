def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s[::-1]:  
        if char == "x":
            if temp:
                result.append(temp)
            temp = ""
        else:
            temp += char
    if temp:
        result.append(temp)
    return "".join(result).replace("x", ")