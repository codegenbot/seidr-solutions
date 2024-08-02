```
def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        temp += char
        if len(temp) % 3 == 0:
            result.append(temp[1:] + temp[0])
            temp = ""
    if temp:
        last_group_size = len(temp) % 3
        if last_group_size != 0:
            temp = temp[-last_group_size] + temp[:-last_group_size]
        result.append(temp)
    return "".join(result)