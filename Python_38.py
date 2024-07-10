```
def decode_cyclic(s: str):
    if len(s) < 3:
        return s
    result = ""
    while len(s) > 1:
        if len(s) == 2:
            result += s[0] + s[1]
            break
        pair = s[:2]
        result += pair[1] + pair[0]
        s = s[2:]
    return result + s