```
def decode_cyclic(s: str):
    result = []
    i = 0
    while i < len(s):
        group = s[i:i+2] if i + 2 <= len(s) else s[i:]
        if len(group) == 1:
            result.append(group * 3)
        elif len(group) == 2:
            result.append(group[1] + group[0])
        else:
            result.append(group)
        i += 2
    return "".join(result)