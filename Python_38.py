def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s + ' ':  
        if char == ' ':
            if len(temp) >= 2 and temp[0] == '(' and temp[-1] == ')':
                if len(result) > 0 and result[-1].endswith(temp[1:-1]):
                    temp = ""
                else:
                    result.append(result[-1] + temp[1:-1] + (temp[0] if temp[2] == ')' else ''))
            elif len(temp) >= 3 and temp[0] == temp[2]:
                if temp[2] == '(':
                    result.append(temp[1:])
                else:
                    result.append(temp[1] + temp[0])
            else:  
                if len(temp) % 3 == 1 and temp[0] == result[-1][0]:
                    result.append(temp[1:] + temp[0])
                else:
                    result.append(temp)
            temp = ""
        else:
            temp += char
    return "".join(result).strip()