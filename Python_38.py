Here is the completed code:

```
def encode_cyclic(s: str):
    groups = [s[i:i+3] for i in range(0, len(s), 3)]
    if len(s) % 3 != 0:
        groups.append(s[-1])
    groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return "".join(groups)

def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if s[i] != s[-1]:
            result += s[i:i+2] + s[i]
            i += 3
        else:
            result += s[i]
            i += 1
    return result