```
def encode_cyclic(s: str):
    result = ""
    for i in range(0, len(s), 3):
        group = s[i:i+3]
        if len(group) == 3:
            result += group[1] + group[0] + group[2]
        else:
            result += group
    return result

def decode_cyclic(s: str):
    result = ""
    for i in range(0, len(s), 3):
        group = s[i:i+3]
        if i % 2 == 1:
            result += group[2] + group[:2]
        else:
            result += group
    return result