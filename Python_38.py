Here is the corrected code:

```python
def decode_cyclic(s: str):
    result = []
    group = ""
    for char in s:
        if len(group) >= 3:
            if len(result) > 0 and result[-1] != "":
                result.append("".join([result.pop() + group[0], group[1:] or ""]))
            else:
                result.append(group)
            group = ""
        group += char
    while len(group) >= 1:
        if len(result) > 0 and result[-1] != "":
            result.append("".join([result.pop() + group[0], group[1:] or ""]))
        else:
            result.append(group)
        group = group[1:]
    return ",".join(map(str, [x for x in result if x != ""]))