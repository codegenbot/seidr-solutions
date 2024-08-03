```
def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 2 <= len(s):  
            group = s[i : i + (len(s) - i)]
        else:
            group = s[i:i+3]
        if len(group) == 1:
            result += group[0] * 2
        elif len(group) == 2:
            result += group[1] + group[0]
        else:
            result += group
        i += 3
    return result