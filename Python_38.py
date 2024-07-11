def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s + s:
        if len(temp) < 2 or (len(temp) == 2 and temp[0] != char):  
            temp += char
        else:
            if len(temp) >= 3:
                if len(result) > 0 and result[-1][0] == temp[0]:  
                    result.append(temp)
                else:
                    result.append(temp[1:] + temp[0])
            temp = ""
    return "".join(result)