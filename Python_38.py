Here is the completed code:

```
def encode_cyclic(s: str):
    groups = [s[(3 * i):min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return "".join(groups)

def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        for _ in range(3):
            if i < len(s):
                result += s[i]
                i += 1
            else:
                break
        if len(result) % 3 == 0 and len(s) - i >= 2:
            last_group = result[-1] + result[0:-1][::-1]
            result = result[:-1] + last_group
    return result