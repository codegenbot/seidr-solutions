def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        temp += char
        if len(temp) == 3:
            if int(temp, 2) < 256:
                result.append(chr(int(temp, 2)))
            else:
                return "Invalid cyclic code"
            temp = ""
    if temp:
        if int(temp, 2) < 256:
            result.append(chr(int(temp, 2)))
        else:
            return "Invalid cyclic code"
    return "".join(result)