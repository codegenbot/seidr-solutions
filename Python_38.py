Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    temp = ""
    for char in s:
        temp += char
        if len(temp) == 3:
            if temp[0] == temp[-1]:
                while True:
                    if not temp or temp[0] != temp[-1]:
                        break
                    temp = temp[1:]
            result += temp[0]
            temp = ""
    if temp:
        result += temp
    return result