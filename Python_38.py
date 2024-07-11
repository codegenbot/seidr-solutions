def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s + s:
        temp += char
        if len(temp) == 3:
            if len(result) > 0 and result[-1] == temp[0]:
                result.append(temp)
            else:
                if len(temp) >= 2:  
                    if temp[0] == temp[2]:  # check for cyclic condition
                        result.append(temp[1] + temp[0]) 
                    else:  
                        result.append(temp[1:])
                    temp = ""
    return "".join(result)