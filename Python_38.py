Here is the solution:

def decode_cyclic(s: str):
    result = ''
    temp_group = ''
    for char in s:
        temp_group += char
        if len(temp_group) == 3:
            if temp_group[0] == temp_group[2]:
                result += temp_group[1]
            else:
                result += temp_group[:2] + temp_group[-1]
            temp_group = ''
    if temp_group:
        if temp_group[0] == temp_group[2]:
            result += temp_group[1]
        else:
            result += temp_group[:2] + temp_group[-1]
    return result