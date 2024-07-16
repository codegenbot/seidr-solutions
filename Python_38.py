Here is the completed code:

```
def encode_cyclic(s: str):
    groups = [s[(3 * i):min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return "".join(groups)

def decode_cyclic(s: str):
    result = ""
    while s:
        for i in range((len(s) + 2) // 3):
            group = s[:3]
            if len(s) < 3:
                group = s
            result += group[1] if len(group) == 3 else group
            s = s[3:]
    return result