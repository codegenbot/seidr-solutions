```
def decode_cyclic(s: str):
    n = len(s)
    result = []
    for i in range(0, n, 3):
        result.append(s[i + 1] + s[i])
    return "".join(result)