```
def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if s[i] == '}':
            group = s[:i+1]
            result += group[2] + group[3]
            s = s[i+4:]
        else:
            i += 1
    return result