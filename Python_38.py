```
def decode_cyclic(s: str):
    result = []
    group = ""
    for char in s:
        group += char
        if len(group) == 3:
            if len(result) > 0 and result[-1] != "":
                result.append("".join([result.pop() + group[0], group[1:] or ""]))
            else:
                result.append(group)
            group = ""
    if len(group) > 0:
        if len(result) > 0 and result[-1] != "":
            result.append("".join([result.pop() + group[0], group[1:] or ""]))
        else:
            result.append(group)
    while len(group) < 3:
        group += s[0]
        s = s[1:]
    for i in range(0, len(s), 3):
        if i != len(s) - 3:
            group = s[i:i+3]
            if len(result) > 0 and result[-1] != "":
                result.append("".join([result.pop() + group[0], group[1:] or ""]))
            else:
                result.append(group)
        else:
            group = s[i:]
            while len(group) < 3:
                group += s[0]
                if len(s) > 1:
                    s = s[1:]
                else:
                    break
            if len(result) > 0 and result[-1] != "":
                result.append("".join([result.pop() + group[0], group[1:] or ""]))
            else:
                result.append(group)
    return ",".join(result).replace(",," ,",")