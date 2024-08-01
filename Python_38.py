def decode_cyclic(s: str):
    result = ""
    temp = ""
    for char in s:
        temp += char
        if len(temp) % 3 == 0:
            if len(temp) > 3:
                temp = temp[1:] + temp[0]
            while len(temp) < 3:
                temp += result[-1]
            result += temp
            temp = ""
    return result + temp