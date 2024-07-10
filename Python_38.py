def decode_cyclic(s: str):
    if s[0] == "x":
        result = s[1:] + s[0]
        i = 1
        while i < len(result) and result[i] == result[0]:
            i += 1
        return result[:i]
    result = ""
    temp = ""
    for char in s:
        if char == "x":
            if temp:
                result += temp[::-1] + "x"
                temp = ""
        else:
            temp += char
    if temp:
        result += temp[::-1]
    return result.replace("xx", "x").replace("x", "")