def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        temp += char
        if len(temp) == 3:
            if len(result) == 0 or result[-1][2] != temp[0]:
                result.append(temp)
            else:
                last_group = result.pop()
                while last_group and last_group[0] != temp[0]:
                    temp += last_group[-1]
                    last_group = last_group[:-1]
                if last_group:
                    result.append(last_group + temp)
                else:
                    result.append(temp)
            temp = ""
    if temp:
        if len(result) == 0 or result[-1][2] != temp[0]:
            result.append(temp)
        else:
            last_group = result.pop()
            while last_group and last_group[0] != temp[0]:
                temp += last_group[-1]
                last_group = last_group[:-1]
            if last_group:
                result.append(last_group + temp)
            else:
                result.append(temp)
    return "".join([group[2:] + group[:2] for group in result])