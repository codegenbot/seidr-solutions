```
def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s) - 2:
        if s[i] == s[i + 1]:
            result += s[i] * 3
        else:
            group = s[i:i+3]
            result += group[0] + group[1]
        i += 3
    return result