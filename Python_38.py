```
def decode_cyclic(s: str):
    result = ""
    temp = ""
    for char in s:
        temp += char
        if len(temp) == 3:
            if temp[0] == temp[2]:
                result += temp[1]
            else:
                result += temp
            temp = ""
    if temp:
        if len(temp) > 1 and temp[0] == temp[-1]:  
            result += temp[1:-1]
        else:  
            result += temp
    return result