```
def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        group = s[i:i+3] if i + 3 <= len(s) else s[i:]
        if len(group) == 3:
            result += group[1] + group[0] + group[2]
        else:
            result += group
        i += 3
    return result