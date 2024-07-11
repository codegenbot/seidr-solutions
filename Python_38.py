```
def decode_cyclic(s: str):
    result = ""
    i = 0
    if len(s) < 3:
        while i < len(s):
            group = s[i : i + 1]
            result += group
            i += 1
        return result
    while i < len(s):
        if i + 2 <= len(s):
            group = s[i : i + 2][::-1] if len(s[i:i+2]) == 2 else s[i : i + 2]
            result += group
            i += 2
        else:
            result += s[i:]
            break
    return result