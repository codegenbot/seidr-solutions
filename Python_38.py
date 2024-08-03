```
def decode_cyclic(s: str):
    result = ""
    temp = s[0]
    for char in s[1:]:
        if len(temp) % 3 == 0:
            result += chr(int(temp + char, 3))
            temp = ""
        else:
            temp += char
    if temp:
        result += chr(int(temp, 3))
    return result