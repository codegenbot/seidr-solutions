Here is the completed code:

```
def decode_cyclic(s: str):
    result = ""
    group = ""
    for char in s:
        group += char
        if len(group) % 3 == 0:
            if len(group) > 3:
                result += group[1] + group[2] + group[0]
            else:
                result += group
            group = ""
    if group:
        if len(group) > 3:
            result += group[1] + group[2] + group[0]
        else:
            result += group
    return result