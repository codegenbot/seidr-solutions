```
def encode_cyclic(s: str):
    groups = [s[i:i+3] for i in range(0, len(s), 3)]
    if len(s) % 3 != 0:
        groups.append(s[-1])
    result = ""
    for group in groups:
        if len(group) == 3:
            result += group[1] + group[0]
        else:
            result += group
    return result

def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i+2 < len(s):
            result += s[i+1] + s[i]
            i += 3
        else:
            result += s[i]
            i += 1
    return result