Here is the completed code:

def decode_cyclic(s: str):
    result = []
    temp = ''
    for char in s:
        if len(temp) < 2:
            temp += char
        else:
            result.append(temp[1] + temp[0])
            temp = char
    result.append(temp)
    return "".join(result)