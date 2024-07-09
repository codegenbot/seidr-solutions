s = input()
def decode_cyclic(s: str):
    result = ""
    temp = ""
    for char in s:
        temp += char
        if len(temp) == 3:
            if len(result) > 0 and result[-1] == temp[0]:
                result += temp[1]
            else:
                if len(result) == 0 or (len(result) > 0 and result[-1] != temp[0]):
                    result += temp
                else:
                    i = 0
                    while i < len(temp):
                        if temp[i] == result[-1]:
                            result += temp[i+1]
                            break
                        i+=1
            temp = ""
    if len(temp) > 0:
        if len(result) > 0 and result[-1] == temp[0]:
            result += temp[1]
        else:
            if len(result) == 0 or (len(result) > 0 and result[-1] != temp[0]):
                result += temp
            else:
                i = 0
                while i < len(temp):
                    if temp[i] == result[-1]:
                        result += temp[i+1]
                        break
                    i+=1
    return result

print(decode_cyclic(s))