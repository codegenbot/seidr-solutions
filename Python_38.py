```
def decode_cyclic(s: str):
    decoded = ""
    temp = ""
    for char in s:
        temp += char
        if len(temp) == 3:
            if temp[0].isdigit():
                decoded += chr(int(temp[1:]) + int(temp[0]) * 9)
            else:
                decoded += temp
            temp = ""
    return decoded