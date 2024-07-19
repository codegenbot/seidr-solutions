def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        temp += char
        if len(temp) % 3 == 0:
            group = list(temp)
            group.insert(0, group.pop())
            result.append("".join(group))
            temp = ""
    if temp:
        group = list(temp)
        group.insert(0, group.pop())
        result.append("".join(group))
    return "".join(result)