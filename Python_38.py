```
def encode_cyclic(s: str):
    result = []
    for i in range(0, (len(s) + 2) // 3):
        group = s[i*3:i*3+3] if i*3+3 <= len(s) else s[i*3:]
        if len(group) == 3:
            result.append(group[1:] + group[0])
        else:
            result.append(group)
    return "".join(result)

def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i+2 <= len(s) and s[i] == s[i+1]:
            result += s[i]*2 + s[i+2]
            i += 3
        else:
            result += s[i]
            i += 1
    return result