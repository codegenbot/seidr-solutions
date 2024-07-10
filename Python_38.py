Here are the completed functions:

```
def encode_cyclic(s: str):
    groups = [s[(3 * i):min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return "".join(groups)

def decode_cyclic(s: str):
    result = ""
    while len(s) >= 3:
        result += s[-3] + s[:-3].rpartition(s[-3])[2]
        s = s[:-3]
    if s:
        result += s
    return result