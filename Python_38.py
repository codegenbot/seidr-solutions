```
def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 1 < len(s) or (i+2< len(s) and len(s[i:i+2]) == 2):
            if i+1 < len(s):
                group = s[i : i + 1]
            elif i+2 < len(s) and len(s[i:i+2]) == 2:
                group = s[i : i + 2][::-1]
            result += group
            i += 1 if i+1< len(s) else 2
        else:
            result += s[i:]
            break
    return result