Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    temp = ""
    for char in s:
        if len(temp) < 3:
            temp += char
        else:
            if temp[0] == char:
                result += temp[1]
            elif temp[1] == char:
                result += temp[0]
            else:
                result += temp[0]
                temp = char + temp[1:]
    return result + temp