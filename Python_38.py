def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        if len(temp) == 3:
            first_char = temp[0]
            second_char = temp[1]
            third_char = temp[2]
            if (second_char + third_char).count(first_char) >= 1 and (
                first_char + second_char
            ).count(third_char) >= 1:
                result.append(second_char + first_char)
            else:
                result.append(temp)
            temp = ""
        else:
            temp += char
    if temp:
        result.append(temp)
    return "".join(result)