```
def encode_cyclic(s: str):
    groups = []
    for i in range((len(s) + 2) // 3):
        start = (3 * i)
        end = min((3 * i + 3), len(s))
        if end < start:
            break
        if end - start == 1:
            groups.append(s[start])
        else:
            groups.append(s[start:end][1:] + s[start])
    return "".join(groups)

def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i % 3 == 0:
            group = s[i:i+3]
            if group[1] != group[0]:
                result += group[-1] + group[:-1]
            else:
                result += group
        i += 1
    return result