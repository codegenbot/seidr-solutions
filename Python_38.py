```
def decode_cyclic(s: str):
    result = ""
    temp = ""
    for char in s:
        if '0' <= char <= '9':
            temp += char
        else:
            while len(temp) > 1 and (temp[0] != '0' or temp[-1] == '3'):
                if int(temp) % 3 == 0:
                    result += str(int(temp)//3)
                else:
                    result += temp[0]
                temp = temp[1:]
            if len(temp) > 0 and (temp[0] != '0' or temp == '3'):
                if int(temp) % 3 == 0:
                    result += str(int(temp)//3)
                else:
                    result += temp[0]
            else:
                result += temp
            temp = ""
    while len(temp) > 1 and (temp[0] != '0' or temp[-1] == '3'):
        if int(temp) % 3 == 0:
            result += str(int(temp)//3)
        else:
            result += temp[0]
        temp = temp[1:]
    if len(temp) > 0 and (temp[0] != '0' or temp == '3'):
        if int(temp) % 3 == 0:
            result += str(int(temp)//3)
        else:
            result += temp[0]
    else:
        result += temp
    return result