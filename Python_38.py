def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        temp += char
        if len(temp) % 3 == 0:
            group = list(temp)
            group[-1], group[0] = group[0], group[-1]
            result.extend(group)
            temp = ""
    return "".join(result + [temp[0]] + list(temp[1:]))