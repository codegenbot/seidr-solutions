```
def encode_cyclic(s: str):
    result = ""
    for i in range(0, len(s), 3):
        if i + 3 <= len(s):
            result += s[i+1:i+3] + s[i]
        else:
            result += s[i:]
    return result

def decode_cyclic(s: str):
    result = ""
    temp = ""
    for char in s:
        if char != 'x':
            temp += char
        else:
            if temp:
                if len(temp) == 3:
                    result += temp[2] + temp[:2]
                else:
                    result += temp
                temp = ""
    if temp:
        result += temp
    return result