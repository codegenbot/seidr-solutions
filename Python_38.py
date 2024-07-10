def decode_cyclic(s: str):
    if s[0] == "x":
        s = s[1:]
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