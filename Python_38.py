```
def decode_cyclic(s: str):
    result = ""
    while len(s) > 0:
        if len(s) >= 3:
            result += s[:3]
            s = s[3:]
        else:
            result += s
            break
    return result