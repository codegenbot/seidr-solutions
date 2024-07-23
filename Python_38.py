```
def decode_cyclic(s: str):
    if len(s) < 1:
        return ""
    if len(s) % 3 != 0:
        return "Error: Input string length is not a multiple of 3."
    result = ""
    i = 0
    while i < len(s):
        if i + 2 <= len(s):
            group = s[i:i+3]
        else:
            group = s[i:]
        if len(group) == 3:
            result += group[1] + group[0]
        elif len(group) > 0:
            result += group
        i += 3
    return result