Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    temp = ""
    for char in s:
        temp += char
        if len(temp) == 3:
            if len(result) > 0 and result[-1] == temp[0]:
                result += temp[1]
            else:
                result += temp
            temp = ""
    if len(temp) > 0:
        result += temp
    return result