def decode_cyclic(s: str):
    temp = ""
    for char in s:
        temp += char
        if len(temp) >= 3:
            while True:
                if not result or not (result[-1] == temp[0]):
                    break
                temp = temp[1:]
            result += temp
            temp = ""
    if len(temp) > 0:
        result += temp
    return result