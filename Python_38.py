def decode_cyclic(s: str):
    result = ""
    temp = ""
    for char in s:
        temp += char
        if len(temp) % 3 == 0:
            last_three_chars = temp[-3:]
            first_char = temp[:-3]
            result += last_three_chars[1] + last_three_chars[0] + first_char
            temp = ""
    if temp:
        last_group = temp
        if len(last_group) > 0:
            if len(last_group) == 3:
                result += last_group[1] + last_group[0]
            else:
                result += last_group
    return result