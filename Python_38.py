```
def decode_cyclic(s: str):
    if s[0] == "x" or s[0].lower() == "x":
        return s[1:] + s[0]
    if not any(c.lower() == 'x' for c in s):
        return s
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