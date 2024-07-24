```
def decode_cyclic(s: str):
    groups = [s[i:i+3] for i in range(0, len(s), 3)]
    result = ""
    for group in groups:
        if len(group) == 2:
            result += group[1] + group[0]
        else:
            result += group
    return result