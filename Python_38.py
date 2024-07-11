```
def decode_cyclic(s: str):
    result = ""
    temp_group = ""
    for char in s:
        if len(temp_group) >= 3 and temp_group[0] == temp_group[-1]:
            while len(temp_group) > 0 and (temp_group[0] == temp_group[-1]):
                result += temp_group[0]
                temp_group = temp_group[1:-1]
        else:
            temp_group += char
    if len(temp_group) > 0:
        while len(temp_group) > 0 and (temp_group[0] == temp_group[-1]):
            result += temp_group[0]
            temp_group = temp_group[1:-1]
        result += temp_group
    return result