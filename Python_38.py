```
def decode_cyclic(s: str) -> str:
    if s[0] == "x" or s[0].lower() == "x":
        return s[1:] + s[0]
    result = ""
    temp = ""
    for char in s:
        if char.lower() == "x":
            if temp:
                result += temp[::-1] + "x"
                temp = ""
        else:
            temp += char
    if temp:
        result += temp[::-1]
    return result.replace("xx", "x").replace("x", "")