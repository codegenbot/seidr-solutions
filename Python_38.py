```
def decode_cyclic(s: str):
    result = ""
    i = 0
    if len(s) < 3:
        while i < len(s):
            group = s[i]
            result += group
            i += 1
        return result
    while i < len(s):
        if i + 1 < len(s):
            group = s[i : i + 1]
        elif i+2< len(s) and len(s[i:i+2]) == 2:
            group = s[i : i + 2][::-1]
        result += group
        i += 1 if i+1< len(s) else 2
    return result