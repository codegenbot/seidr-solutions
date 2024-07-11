def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s + s:
        if temp:
            if len(result) > 0 and result[-1] == temp[0]:
                if len(temp) > 3 or (len(temp) == 3 and temp[2:] != temp[:2]):
                    result.append(temp)
            else:
                result.append(temp[1:] + temp[0])
            temp = ""
        temp += char
    return "".join(result)