def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s + s:
        temp += char
        if len(temp) >= 3:
            if temp[0] == temp[-1]:  
                result.append(temp[1:-1]) 
            else:  
                result.append(temp)
            temp = ""
    return "".join(result)