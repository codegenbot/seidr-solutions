def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        temp += char
        if len(temp) % 3 == 0:
            group = temp[1:] + temp[0]
            result.append(group)
            temp = ""
    return "".join(result + [temp])