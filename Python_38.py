def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        temp = s[i:i+3]
        if temp[1] == temp[0]:
            result += temp[0]
        else:
            result += temp
        i += 3
    return result