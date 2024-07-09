def decode_cyclic(s):
    result = ""
    temp = ""
    for char in s:
        temp += char
        if len(temp) >= 3:  
            if len(result) > 0 and result[-1] == temp[0]:
                result += temp[1]
            else:
                result += temp
            temp = ""
    if len(temp) > 0:
        if len(result) > 0 and result[-1] == temp[0]:
            result += temp[1]
        elif len(temp) >= 3:  
            if result:  
                result += temp[:-1]  
            else:
                result = temp  
        else:  
            result += temp
    return result

s = input()
print(decode_cyclic(s))