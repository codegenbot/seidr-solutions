```
def decode_cyclic(s: str):
    result = []
    temp = ""
    if s[0] == "(":
        s = s[1:] + s
    for char in s + s:
        temp += char
        if len(temp) == 3:
            if len(result) > 0 and result[-1] == temp[0]:
                result.append(temp)
            else:
                if temp[0] == temp[2]:
                    if temp[2] == "(":
                        result.append("(" + temp[1:])
                    else:
                        result.append(temp[1:] + temp[0])
                else:
                    if len(temp) % 3 == 1 and temp[0] == result[-1]:
                        result.append(temp[1:] + temp[0])
                    else:
                        result.append(temp[1:])
                temp = ""
    return "".join(result)