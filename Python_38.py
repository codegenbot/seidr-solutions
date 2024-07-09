Here is the solution:

def decode_cyclic(s: str):
    result = []
    temp = ''
    for char in s:
        if len(temp) == 3 and temp[0] == char:
            temp = temp[1:] + temp[0]
        else:
            temp += char
        if len(temp) == 3:
            result.append(temp)
            temp = ''
    if temp:
        result.append(temp)
    return ''.join(result)