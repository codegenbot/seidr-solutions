def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s + s:
        temp += char
        if len(temp) >= 3:
            if temp[0] == temp[2]: 
                if temp[2] == '(':
                    result.append('(' + temp[1:-1])
                else:
                    result.append(')' + temp[1] + temp[0])
                temp = ""
    return "".join(result)