```
def decode_cyclic(s: str):
    s = s * (3 - len(s) % 3)
    result = ""
    temp = ""
    for char in s + s:
        temp += char
        if len(temp) == 3:
            if len(result) > 0 and result[-1] == temp[0]:
                result += temp[1:]
            elif temp[0] == temp[2]:
                if temp[2] == "(":
                    result += "(" + temp[1:-1]
                else:
                    result += temp[1:-1] + temp[0]
            else:
                if len(temp) % 3 == 1 and temp[0] == result[-1]:
                    result += temp[1:-1] + temp[0]
                else:
                    if len(result) > 0 and result[-1] == temp[0]:
                        result += temp
                    elif temp[0] == temp[2]:
                        if temp[2] == "(":
                            result += "(" + temp[1:]
                        else:
                            result += temp[1:] + temp[0]
                    else:
                        result += temp
            temp = ""
    if len(temp) % 3 == 1 and temp[0] == result[-1]:
        result += temp[1:-1] + temp[0]
    elif len(temp) > 0:
        if len(result) > 0 and temp[0] == result[-1]:
            result += temp
        else:
            if len(temp) % 3 == 1 and temp[0] == temp[2]:
                if temp[2] == "(":
                    result += "(" + temp[1:]
                else:
                    result += temp[1:] + temp[0]
            else:
                result += temp
    return result