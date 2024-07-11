```
def decode_cyclic(s: str):
    if len(s) <= 1:
        raise ValueError("Input string length should be greater than 1")
    result = ''
    while len(s) > 1:
        group = s[:2]
        if group[0] == '1':
            result += group[0] + group[1]
        else:
            result += group[1] + group[0]
        s = s[2:]
    return result