def decode_cyclic(s: str):
    if len(s) % 3 != 0:
        return s
    result = ""
    i = 0
    while i < len(s):
        group = s[i:i+min(len(s)-i, 3)]
        if i + 2 >= len(s):  
            group = group[:-1]  
        result += chr(int(group[0]+group[1]+group[-1], 3))  
        i += len(group)
    return result