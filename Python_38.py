```
def decode_cyclic(s: str):
    result = ""
    i = 0
    if len(s) <= 2:
        result += s
    else:
        while i < len(s):
            if i + 2 <= len(s): 
                group = s[i : i + 3]
            else:
                group = s[i:]
            if i > 0:
                result += group[0] + group[1]
            else:
                result += group
            i += 3
    return result