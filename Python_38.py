def decode_cyclic(s: str):
    result = []
    temp = s[:2]  
    for char in s[2:] + s[:2]:  
        temp += char
        if len(temp) == 3:
            if len(result) > 0 and result[-1] == temp[1]:
                temp = temp[2:] + temp[:2]
            result.append(temp)
            temp = ""
    return "".join(result)