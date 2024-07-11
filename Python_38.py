def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s * 2:
        temp += char
        if len(temp) > len(s) and temp[:len(s)] == s:
            if len(result) > 0 and result[-1] == temp[0]:
                result.append(temp)
            else:
                if len(temp) >= 3:  
                    if temp[0] == temp[2]:  # check for cyclic condition
                        result.append(temp[1] + temp[0]) 
                    else:  
                        result.append(temp[1:])
                temp = ""
    return "".join(result)