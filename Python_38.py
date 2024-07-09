```Python
def decode_cyclic(s: str):
    result = ""
    temp = ""
    for char in s:
        if char == 'a':
            result += '1'
            temp = ''
        elif char == 'b':
            result += '2' 
            temp = ''
        else:
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