Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    temp = ""
    for char in s:
        temp += char
        if len(temp) == 3:
            if len(result) > 0 and len(result) % 3 != 0:
                result += temp[2]
            else:
                result += temp
            temp = ""
    if len(temp) > 0:
        result += temp[1:] + temp[0] if len(temp) == 3 else temp
    return result