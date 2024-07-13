Here is the solution:

def decode_cyclic(s: str):
    result = []
    temp = ''
    for char in s:
        if char == groups[-1][0]:
            while len(temp) < 2:
                temp = temp[1:] + temp[0]
            result.append(temp[1:] + temp[0])
            temp = ''
        else:
            temp += char
    return "".join(result)