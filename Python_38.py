```
def decode_cyclic(s: str):
    s = s * (3 - len(s) % 3)
    result = ""
    for i in range(0, len(s), 3):
        temp = s[i:i+3]
        if result and result[-1] == temp[0]:
            result += temp[1:]
        elif temp[0] == temp[2]:
            if temp[0] == "(":
                result += "(" + temp[1:-1]
            else:
                result += temp[1:-1] + temp[0]
        else:
            result += temp
    return result