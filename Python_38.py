def decode_cyclic(s: str):
    result = ""
    temp = ""
    for char in s + s:
        if char == '(' or len(temp) > 0 and char != ')':
            temp += char
        else:
            if len(temp) >= 3 and temp[0] == temp[-1] and temp[0] in '()':
                result += temp[1:-1]
            elif temp:
                result += temp
            temp = ""
    return result