```
def decode_cyclic(s: str):
    s = s * (3 - len(s) % 3)
    result = ""
    temp = ""
    for char in s:
        temp += char
        if len(temp) == 3:
            if temp[0] == '(' and temp[1] == temp[2]:
                while True:
                    if result and result[-1] != '(':
                        result += temp[1:]
                        break
                    else:
                        result += temp[1:]
                        break
            elif temp[0] == temp[2]:
                if temp[0] == '(':
                    result += temp[1:-1]
                else:
                    result += temp[1:] + temp[0]
            else:
                if len(temp) % 3 == 1 and temp[0] == result[-1]:
                    result += temp[1:] + temp[0]
                else:
                    result += temp
            temp = ""
    if temp:
        if temp[0] == '(' and temp[1] == temp[2]:
            while True:
                if result and result[-1] != '(':
                    result += temp[1:]
                    break
                else:
                    result += temp[1:]
                    break
        elif temp[0] == temp[2]:
            if temp[0] == '(':
                result += temp[1:-1]
            else:
                result += temp[1:] + temp[0]
        else:
            if len(temp) % 3 == 1 and temp[0] == result[-1]:
                result += temp[1:] + temp[0]
            else:
                result += temp
    return result