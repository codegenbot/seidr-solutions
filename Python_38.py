def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        if char != temp[0]:
            result.append(temp)
            temp = char
        else:
            temp += char
    return "".join(result + [temp])