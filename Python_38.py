```
def encode_cyclic(s: str):
    result = ""
    for i in range(0, len(s), 3):
        group = s[i:i+3]
        if group[1] == group[2]:
            result += group[0] + 2*group[1]
        else:
            result += group
    return result

def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if s[i].isdigit():
            count = int(s[i])
            i += 1
            for _ in range(count - 1):
                result += s[i]
                i += 1
            result += s[i-1]
        else:
            result += s[i]
        i += 1
    return result