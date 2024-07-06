```
def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if (i + 2) <= len(s):
            group = s[i : i + 2]
            if i < len(s) - 1:
                result += group[1] + group[0]
            else:
                result += group[1]
        else:
            result += s[i]
        i += 1
    return result