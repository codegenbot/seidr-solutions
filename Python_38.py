Here is the completed code:

def decode_cyclic(s: str):
    result = ''
    temp = ''
    for char in s:
        temp += char
        if len(temp) == 3:
            if temp[0] != temp[2]:
                while True:
                    if temp[0] == temp[1]:
                        result += temp[0]
                        temp = ''
                        break
                    elif temp[0] == temp[2]:
                        result += temp[0]
                        temp = ''
                        break
                    else:
                        temp = temp[1:] + temp[0]
            else:
                result += temp[0]
                temp = ''
        if len(s) - 1 == i:
            if len(temp) > 0:
                if temp[0] != temp[2]:
                    while True:
                        if temp[0] == temp[1]:
                            result += temp[0]
                            temp = ''
                            break
                        elif temp[0] == temp[2]:
                            result += temp[0]
                            temp = ''
                            break
                        else:
                            temp = temp[1:] + temp[0]
                    if len(temp) > 0:
                        result += temp[0]
                else:
                    result += temp[0]
        i += 1
    return result