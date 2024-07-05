```python
def decode_cyclic(s: str):
    result = []
    group = ""
    for char in s:
        group += char
        if len(group) == 3:
            if result and result[-1] != "":
                result.append(result.pop() + group[0] + group[1:])
            else:
                result.append(group)
            group = ""
    while group:
        if result and result[-1] != "":
            result.append(result.pop() + group[0] + group[1:])
        else:
            result.append(group)
        group = group[1:]
    return ",".join(result).replace(",,", ",")