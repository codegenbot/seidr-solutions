def decode_cyclic(s: str):
    result = ""
    temp = ""
    for char in s:
        if len(temp) < 2 or (len(temp) == 2 and temp[0] != char):
            temp += char
        else:
            result += temp[1]
            temp = char + temp[0]
    return result + temp