Here is the completed code:

```
def decode_cyclic(s: str):
    result = ""
    group = ""
    for char in s:
        group += char
        if len(group) % 3 == 0:
            if len(group) > 3:
                group = group[1:] + group[0]
            result += group
            group = ""
    if group:
        if len(group) > 3:
            group = group[1:] + group[0]
        result += group
    return result