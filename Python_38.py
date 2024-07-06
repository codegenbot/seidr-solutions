Here is the completed code:

```
def encode_cyclic(s: str):
    groups = [s[(3 * i):min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return "".join(groups)

def decode_cyclic(s: str):
    result = ""
    temp = ""
    for char in s:
        temp += char
        if len(temp) % 3 == 0:
            if len(temp) > 3:
                for i in range(1, 4):
                    result += temp[len(temp)-i]
            else:
                result += temp
            temp = ""
    if len(temp) > 0:
        if len(temp) > 3:
            for i in range(1, 4):
                result += temp[len(temp)-i]
        else:
            result += temp
    return result