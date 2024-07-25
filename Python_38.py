```
def decode_cyclic(s: str):
    if len(s) % 3 != 0:
        return s
    result = ""
    i = 0
    while i < len(s):
        group = s[i:i+3]
        if not group[1].isdigit():
            break
        result += chr(int(group[0]+group[1]+group[2], 3))  
        i += 3
    return result