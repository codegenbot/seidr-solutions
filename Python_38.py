```
def encode_cyclic(s: str):
    if not s:
        return ''
    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return "".join(groups)

def decode_cyclic(s: str):
    if not s:
        return ''
    result = ""
    while s:
        if len(s) >= 3:
            result += s[:3][::-1]
            s = s[3:]
        else:
            result += s[::-1]
            s = ""
    return result