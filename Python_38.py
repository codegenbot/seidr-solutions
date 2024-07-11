def decode_cyclic(s: str):
    result = []
    temp = ""
    chunk_size = 3
    for i, char in enumerate(s):
        if (i + 1) % chunk_size == 0:
            result.append(temp[1] + temp[0])
            temp = ""
        else:
            temp += char
    if temp:
        result.append(temp)
    return "".join(result)