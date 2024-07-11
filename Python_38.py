def decode_cyclic(s: str):
    if not isinstance(s, str) or len(s) == 0:
        return "Error: Input is invalid."
    
    s = s * (3 - len(s) % 3)
    result = ""
    temp = ""
    for char in s:
        temp += char
        if len(temp) == 3:
            if temp[0] == temp[2] and temp[1] == "(":
                if not result or result[-1] != " ":
                    result += " "
                result += temp[0]
            else:
                if not result or result[-1] != " ":
                    result += " "
                result += temp
            temp = ""
    return result.strip()