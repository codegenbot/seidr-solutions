```
def decode_cyclic(s: str):
    result = ''
    for i in range(0, len(s), 2):
        if i + 1 < len(s) and i + 2 < len(s):
            group = s[i:i+3][::-1]
        else:
            group = s[i:]
        result += group
    return result