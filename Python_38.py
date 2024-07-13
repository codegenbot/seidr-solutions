def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        temp += char
        if len(temp) % 3 == 0 and temp != "":
            while len(temp) > 1 and temp[0] == temp[-1]:
                result.append(temp[1])
                temp = ""
            if temp != "":
                result.extend([temp[0], temp[-1]])
            else:
                result.append(temp)
    return "".join(result)