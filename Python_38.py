```
def decode_cyclic(s: str):
    s = s * (3 - len(s) % 3)
    if len(s) % 3 == 0:
        result = ""
        temp = ""
        for char in s:
            temp += char
            if len(temp) == 3:
                if temp[1] == "(" and temp[2] == ")":
                    if result != "": 
                        result += " "
                    result += temp[:1]
                else: 
                    if len(result) > 0 and result[-1] == temp[0]:
                        result += temp[1:]
                    elif temp[0] == temp[2]:  
                        if temp[0] == "(":
                            result += "(" + temp[1:-1] + ")"
                        else:
                            result += temp[1:-1] + temp[0]
                    else: 
                        result += temp
                temp = ""
        return result.strip()
    result = ""
    temp = ""
    for char in s + s:
        temp += char
        if len(temp) == 3:
            if len(result) > 0 and result[-1] == temp[0]:
                result += temp
            else:
                if temp[0] == temp[2]:  
                    if temp[2] == "(":
                        result += "(" + temp[1:]
                    else:
                        result += temp[1:] + temp[0]
                else:
                    if len(temp) % 3 == 1 and temp[0] == result[-1]:
                        result += temp[1:] + temp[0]
                    else:
                        result += temp
            temp = ""
    if temp:
        if len(result) > 0 and result[-1] == temp[0]:
            result += temp
        elif len(temp) % 3 == 1 and temp[0] == result[-1]:
            result += temp[1:] + temp[0]
        else:
            result += temp
    return result