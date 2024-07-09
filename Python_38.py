```
def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if (i + 2) <= len(s): 
            group = s[i : i + 2]
        elif (i + 1) <= len(s): 
            group = s[i:]
        else:
            group = s[i:i+3]
        if len(group) == 3 and group[0] == group[2]:
            result += group[1]
        else:
            result += group
        i += 3
    return result