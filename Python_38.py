def decode_cyclic(s):
    result = ""
    temp_group = ""
    for char in s:
        temp_group += char
        if len(temp_group) == 3:
            if not result: 
                result += temp_group[::-1]
            elif len(result[-1]) == 3:
                result[-1] = temp_group[2] + temp_group[1] + temp_group[0]
            else:
                last_group = result.pop()
                if len(last_group) > 0:
                    result.append(temp_group[2] + temp_group[1] + temp_group[0])
                else: 
                    result.append(temp_group[::-1])
    return result