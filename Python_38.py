```
def decode_cyclic(s: str):
    result = ""
    while s:
        if len(s) >= 3:
            group = s[:3]
            if group[0] == group[1]:
                result += group[0]
                s = s[3:]
            else:
                for i in range(2, -1, -1):
                    if group[i] != group[i-1]:
                        result += group[i]
                        break
                s = s[3:]
        else:
            result += s[0]
            s = s[1:]
    return result