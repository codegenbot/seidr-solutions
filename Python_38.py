Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    temp = ""
    for char in s:
        if len(temp) < 3:
            temp += char
        else:
            result += temp[1] + temp[0]
            temp = char
    if temp:
        result += temp
    return result